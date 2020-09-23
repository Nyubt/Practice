using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    class Program
    {
        private static Dictionary<string, IStructure> _docs = new Dictionary<string, IStructure>();
        static void Main(string[] args)
        {
            string line;
            char[] trim = { ' ' };
            System.IO.StreamReader file = new System.IO.StreamReader(@"c:\Users\Elena\source\repos\ZF_Practica\Task2\SubsystemsAndFiles.txt");

            while ((line = file.ReadLine()) != null)
            {
                line = line.TrimEnd(trim);
                Console.WriteLine("{0}", line);
                string[] words = line.Split(',');
                if (words.Length == 2)
                {
                    File obj;
                    if (!_docs.ContainsKey(words[0]))
                    {
                        obj = new File(words[0], int.Parse(words[1]));
                    }
                    else
                    {
                        obj = (File)_docs[words[0]];
                        obj.Size = int.Parse(words[1]);
                    }
                    _docs[words[0]] = obj;
                }
                if (words.Length == 3)
                {
                    Subsystem obj;
                    if (!_docs.ContainsKey(words[0]))
                    {
                        obj = new Subsystem(words[0]);
                    }
                    else
                    {
                        obj = (Subsystem)_docs[words[0]];
                    }
                    words[1] = words[1].TrimEnd(trim);
                    string[] folders = words[1].Length > 0 ? words[1].Split(';') : new string[0];
                    foreach(string folder in folders)
                    {
                        if (_docs.ContainsKey(folder))
                        {
                            obj.AddChild(_docs[folder]);
                        }
                        else
                        {
                            Subsystem newObj = new Subsystem(folder);
                            _docs.Add(folder, newObj);
                            obj.AddChild(_docs[folder]);
                        }
                    }
                    words[2] = words[2].TrimEnd(trim);
                    string[] files = words[2].Length > 0 ? words[2].Split(';') : new string[0];
                    foreach (string filename in files)
                    {
                        if (_docs.ContainsKey(filename))
                        {
                            obj.AddChild(_docs[filename]);
                        }
                        else
                        {
                            File newObj = new File(filename, 0);
                            _docs.Add(filename, newObj);
                            obj.AddChild(_docs[filename]);
                        }
                    }
                    _docs[words[0]] = obj;
                }
            }
            Console.WriteLine("{0}", _docs["S1"].Size);
            foreach(KeyValuePair<string,IStructure> obj in _docs)
            {
                Console.WriteLine("{0} {1}", obj.Key, obj.Value.GetFullPath());
            }

            Console.WriteLine();
            try
            {
                IStructure pathResult = _docs["S1"].FindObjectByPath("/S1/S3/S4/F6");
                if (pathResult != null)
                {
                    Console.WriteLine("/S1/S3/S4/F6 {0}", pathResult.Name);
                }
            }
            catch (InvalidPathException e)
            {
                Console.WriteLine("Invalid path {0}", e.ToString());
            }

            Console.WriteLine();
            try
            {
                IStructure pathResult = _docs["S1"].FindObjectByPath("/S1/S3");
                if (pathResult != null)
                {
                    Console.WriteLine("/S1/S3 {0}", pathResult.Name);
                }
            }
            catch (InvalidPathException e)
            {
                Console.WriteLine("Invalid path {0}", e.ToString());
            }

            Subsystem total = new Subsystem("TOTAL");
            foreach (KeyValuePair<string, IStructure> obj in _docs)
            {
                if(obj.Value.Parent == null)
                {
                    total.AddChild(obj.Value);
                }
            }

            file.Close();

            Console.ReadLine();
        }
            /*interface ISize
            {
                string[] Files { get; set; }
                string[] Subsys { get; set; }
                int GetSize();
            }

            class File : ISize
            {
                public int Size { get; set; }
                public string Name { get; set; }
                public string[] Subsys { get; set; }
                public string[] Files { get; set; }
                private Stack<string> _path = new Stack<string>();
                public File(string name, int size, string[] subs, string[] files)
                {
                    Size = size;
                    Name = name;
                    Files = files;
                    Subsys = subs;
                }
                public int GetSize()
                {
                    return Size;
                }
                private bool Loop()
                {
                    string searchValue = _path.Peek();
                    foreach (KeyValuePair<string, ISize> elem in _docs)
                    {
                        if (elem.Value.Files.Contains(searchValue) || elem.Value.Subsys.Contains(searchValue))
                        {
                            _path.Push(elem.Key);
                            return true;
                        }
                    }
                    return false;
                }
                public void PrintName()
                {
                    _path.Push(Name);
                    do
                    {
                        ;
                    } while (Loop());
                    while (_path.Count > 0)
                    {
                        Console.Write("->{0}", _path.Pop());
                    }
                    Console.WriteLine();
                }

            }

            class Subsystem : ISize
            {
                public string Name { get; set; }
                public string[] Subsys { get; set; }
                public string[] Files { get; set; }
                public Subsystem(string name, string[] subs, string[] files)
                {
                    Name = name;
                    Subsys = subs;
                    Files = files;
                }

                public int GetSize()
                {
                    int size = 0;

                    foreach(string item in Subsys)
                    {
                        size += _docs[item].GetSize();
                    }

                    foreach (string item in Files)
                    {
                        size += _docs[item].GetSize();
                    }

                    return size;
                }
            }

            private static Dictionary<string, ISize> _docs = new Dictionary<string, ISize>();

            static void Main(string[] args)
            {
                string line;
                char[] trim = { ' ' };
                System.IO.StreamReader file = new System.IO.StreamReader(@"c:\Users\Elena\source\repos\ZF_Practica\Task2\SubsystemsAndFiles.txt");

                while ((line = file.ReadLine()) != null)
                {
                    line = line.TrimEnd(trim);
                    Console.WriteLine("{0}", line);
                    string[] words = line.Split(',');
                    if(words.Length == 2)
                    {
                        File elem = new File(words[0], int.Parse(words[1]), new string[0], new string[0]);
                        elem.PrintName();
                        _docs.Add(words[0], elem);
                    }
                    if (words.Length == 3)
                    {
                        words[1] = words[1].TrimEnd(trim);
                        string[] folders = words[1].Length > 0 ? words[1].Split(';') : new string[0];
                        words[2] = words[2].TrimEnd(trim);
                        string[] files = words[2].Length > 0 ? words[2].Split(';') : new string[0];
                        Subsystem elem = new Subsystem(words[0], folders, files);
                        _docs.Add(words[0], elem);
                    }
                }

                Console.WriteLine("{0}", _docs["S1"].GetSize());


                file.Close();

                Console.ReadLine();
            }*/
        }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Task6
{
    class Program
    {
        static void Main(string[] args)
        {
            string line;
            char[] trim = { ' ' };
            System.IO.StreamReader file = new System.IO.StreamReader(@"c:\Users\Elena\source\repos\ZF_Practica\Task6\SubsystemsAndFilesAndSections.txt");
            var tree = new TreeLogic();

            while ((line = file.ReadLine()) != null)
            {
                line = line.TrimEnd(trim);
                Console.WriteLine("{0}", line);
                string[] words = line.Split(',');
                tree.AddStructure(words);
            }

            var _docs = tree.Docs;
            Console.WriteLine("{0}", _docs["S1"].Size);
            foreach (KeyValuePair<string, IStructure> obj in _docs)
            {
                Console.WriteLine("{0} {1}", obj.Key, obj.Value.GetFullPath());
            }

            Console.WriteLine();
            IStructure pathResult = _docs["S1"].FindObjectByPath("/S1/S3/S4/F6");
            if (pathResult != null)
            {
                Console.WriteLine("/S1/S3/S4/F6 {0}", pathResult.Name);
            }

            Console.WriteLine();
            pathResult = _docs["S1"].FindObjectByPath("/S1/S3");
            if (pathResult != null)
            {
                Console.WriteLine("/S1/S3 {0}", pathResult.Name);
            }

            file.Close();

            Console.ReadLine();
        }
    }
}

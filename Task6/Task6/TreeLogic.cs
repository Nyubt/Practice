using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Task6
{
    public class TreeLogic
    {
        /// <summary>
        /// dictionary containing all names and objects
        /// </summary>
        public Dictionary<string, IStructure> Docs = new Dictionary<string, IStructure>();

        public bool ShowSections { get; set; } = false;

        /// <summary>
        /// local root variable
        /// </summary>
        //Subsystem root = new Subsystem("root");
        Collection<IStructure> root = new Collection<IStructure>();

        /// <summary>
        /// public root variable
        /// </summary>
        //public IStructure Root {
        public Collection<IStructure> Root {
            get
            {
                foreach (KeyValuePair<string, IStructure> obj in Docs)
                {
                    if (obj.Value.Parent == null)
                    {
                        //root.AddChild(obj.Value);
                        root.Add(obj.Value);
                    }
                }
                return root;
            }
        }

        /// <summary>
        /// Adds a new object to Docs and tree stucture 
        /// </summary>
        /// <param name="objectInfo">string array containing name and object info</param>
        public void AddStructure(string[] objectInfo)
        {
            IStructure str = GetStructure(objectInfo);
            if(!(str is Section obj))
            {
                AddChildren<Archive, Subsystem>(str, objectInfo[1]);
                if (ShowSections == true || !(str is Archive))
                {
                    AddChildren<Section, Archive>(str, objectInfo[2]);
                }
            }
            if (ShowSections == true || !(str is Section))
            {
                Docs[objectInfo[0]] = str;
            }
        }

        /// <summary>
        /// Adds children to parent object
        /// </summary>
        /// <typeparam name="T1">object type</typeparam>
        /// <typeparam name="T2">object type</typeparam>
        /// <param name="parent">parent object</param>
        /// <param name="objectInfo">string containing object info</param>
        private void AddChildren<T1, T2>(IStructure parent, string objectInfo) where T1:IStructure,new() where T2:IStructure,new()
        {
            char[] trim = { ' ' };
            objectInfo = objectInfo.TrimEnd(trim);
            string[] files = objectInfo.Length > 0 ? objectInfo.Split(';') : new string[0];
            foreach (string filename in files)
            {
                if (Docs.ContainsKey(filename))
                {
                    parent.AddChild(Docs[filename]);
                }
                else
                {
                    IStructure newObj;
                    if (parent is Archive)
                    {
                        newObj = new T1();
                    }
                    else
                    {
                        newObj = new T2();
                    }
                    newObj.Name = filename;
                    Docs.Add(filename, newObj);
                    parent.AddChild(Docs[filename]);
                }
            }
        }

        /// <summary>
        /// Returns a different IStructure object depending its name
        /// </summary>
        /// <param name="objectInfo">array containing name and object info</param>
        /// <returns></returns>
        private IStructure GetStructure(string[] objectInfo)
        {
            string name = objectInfo[0];
            if (Regex.Match(name, "^Section").Success)
            {
                if (!Docs.ContainsKey(name))
                {
                    return new Section(name, int.Parse(objectInfo[1]), objectInfo[2]);
                }
                Section obj = (Section)Docs[name];
                obj.SetSize(int.Parse(objectInfo[1]));
                obj.SetAddress(objectInfo[2]);

                return obj;
            } else if(Regex.Match(name, "^F").Success){
                if (!Docs.ContainsKey(name))
                {
                    return new Archive(name);
                }
                return (Archive)Docs[name];
            }
            if (!Docs.ContainsKey(name))
            {
                return new Subsystem(name);
            }
            return (Subsystem)Docs[name];
        }
    }
}

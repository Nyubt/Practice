using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    public class Subsystem : IStructure
    {
        public string Name { get; set; }
        public IStructure Parent { get; set; }
        public List<IStructure> Children { get; set; }

        /// <summary>
        /// Subsystem constructor
        /// </summary>
        /// <param name="name">Name of the subsystem object</param>
        public Subsystem(string name)
        {
            Name = name;
            Parent = null;
            Children = new List<IStructure>();
        }

        /// <summary>
        /// Get the size of the subsystem tree
        /// </summary>
        public int Size //caz extrem pt 0, caz normal
        {
            get
            {
                int size = 0;

                foreach (IStructure item in Children)
                {
                    size += item.Size;
                }
                return size;
            }
        }

        /// <summary>
        /// Add a child branch to the subsystem root
        /// </summary>
        /// <param name="child">Child branch</param>
        public void AddChild(IStructure child)
        {
            child.Parent = this;
            Children.Add(child);
        }

        /// <summary>
        /// Return full path from root to current object
        /// </summary>
        /// <returns></returns>
        public string GetFullPath()
        {
            string fullPath = this.Parent != null ? this.Parent.GetFullPath() + '/' + Name : '/' + Name;
            return fullPath;
        }

        /// <summary>
        /// Returns object by traversing the "tree" using give path
        /// </summary>
        /// <param name="path">Full path to the object</param>
        /// <returns></returns>
        public IStructure FindObjectByPath(string path)
        {
            if (!Validators.ValidatePath(path))
            {
                throw new InvalidPathException();
            }
            string[] elem = path.Split('/');
            if (elem.Length == 2 && this.Name == elem[1])
            {
                return this;
            }
            else if (elem.Length > 2)
            {
                foreach (IStructure branch in this.Children)
                {
                    if (branch.Name == elem[2])
                    {
                        return branch.FindObjectByPath(path.Remove(0, elem[1].Length + 1));
                    }
                }
            }
            return null;
        }

        /// <summary>
        /// Method to override equality. For testing
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public override bool Equals(object obj)
        {
            Subsystem strct = obj as Subsystem;
            if (strct == null)
            {
                return false;
            }
            return this.Name == strct.Name 
                && ((this.Parent == null && strct.Parent == null) || this.Parent.Equals(strct.Parent)) 
                && this.Children.Equals(strct.Children);
        }

        public override int GetHashCode()
        {
            var hashCode = 135071489;
            hashCode = hashCode * -1521134295 + EqualityComparer<string>.Default.GetHashCode(Name);
            hashCode = hashCode * -1521134295 + EqualityComparer<IStructure>.Default.GetHashCode(Parent);
            hashCode = hashCode * -1521134295 + EqualityComparer<List<IStructure>>.Default.GetHashCode(Children);
            hashCode = hashCode * -1521134295 + Size.GetHashCode();
            return hashCode;
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    public class File : IStructure
    {
        public string Name { get; set; }
        public IStructure Parent { get; set; }
        public List<IStructure> Children { get; set; }
        public int Size { get; set; }

        /// <summary>
        /// File constructor
        /// </summary>
        /// <param name="name">Name of the file object</param>
        /// <param name="size">Size of the file object</param>
        public File(string name, int size)
        {
            Name = name;
            Size = size;
            Parent = null;
            Children = new List<IStructure>();
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
            return null;
        }

        /// <summary>
        /// Method to override equality. For testing
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        public override bool Equals(object obj)
        {
            File strct = obj as File;
            if (strct == null)
            {
                return false;
            }
            return this.Name == strct.Name 
                && ((this.Parent == null && strct.Parent == null) || this.Parent.Equals(strct.Parent)) 
                && this.Children.Equals(strct.Children) 
                && this.Size == strct.Size;
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

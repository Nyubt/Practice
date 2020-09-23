using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task6
{
    public class Section : IStructure
    {
        /// <summary>
        /// Structure name
        /// </summary>
        public override string Name { get; set; }
        /// <summary>
        /// Structure parent
        /// </summary>
        public override IStructure Parent { get; set; }
        /// <summary>
        /// Structure size
        /// </summary>
        public override int Size { get
            {
                return _size;
            }
        }
        int _size;
        /// <summary>
        /// Structure address
        /// </summary>
        public long Address { get; private set; }

        public override string Path { get; set; }
        public string Icon { get; }

        public override List<IStructure> Children { get; set; }

        /// <summary>
        /// Section constructor for generic method with new() constraint
        /// </summary>
        public Section():this("") { }

        /// <summary>
        /// Section constructor with parameters
        /// </summary>
        /// <param name="name">Name of the cection object</param>
        /// <param name="size">Size of the cection object</param>
        /// <param name="address">Address of the cection object</param>
        public Section(string name, int size = 0, string address = "0")
        {
            Name = name;
            _size = size;
            Address = Convert.ToInt64(address, 16);
            Children = new List<IStructure>();
            Path = GetFullPath();
            Icon = "Icons/database.ico";
            Parent = null;
        }

        public void SetSize(int size)
        {
            _size = size;
        }

        public void SetAddress(string address)
        {
            Address = Convert.ToInt64(address, 16);
        }

        /// <summary>
        /// Return full path from root to current object
        /// </summary>
        /// <returns></returns>
        public override string GetFullPath()
        {
            string fullPath = this.Parent != null ? this.Parent.GetFullPath() + '/' + Name : '/' + Name;
            return fullPath;
        }

        /// <summary>
        /// Returns object by traversing the "tree" using give path
        /// </summary>
        /// <param name="path">Full path to the object</param>
        /// <returns></returns>
        public override IStructure FindObjectByPath(string path)
        {
            if (!Validators.ValidatePath(path))
            {
                throw new ArgumentException("Invalid path exception", "path");
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
            Section sec = obj as Section;
            if (sec == null)
            {
                return false;
            }
            return this.Name == sec.Name
                && ((this.Parent == null && sec.Parent == null) || this.Parent.Equals(sec.Parent))
                && this.Size == sec.Size
                && this.Address == sec.Address;
        }

        /// <summary>
        /// System generated method
        /// </summary>
        /// <returns></returns>
        public override int GetHashCode()
        {
            var hashCode = 96720156;
            hashCode = hashCode * -1521134295 + EqualityComparer<string>.Default.GetHashCode(Name);
            hashCode = hashCode * -1521134295 + EqualityComparer<IStructure>.Default.GetHashCode(Parent);
            hashCode = hashCode * -1521134295 + Size.GetHashCode();
            hashCode = hashCode * -1521134295 + Address.GetHashCode();
            return hashCode;
        }

        public override void AddChild(IStructure structure)
        {
            
        }
    }
}

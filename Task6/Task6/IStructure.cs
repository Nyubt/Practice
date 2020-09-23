using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task6
{
    public abstract class IStructure
    {
        public abstract string Name { get; set; }
        public abstract IStructure Parent { get; set; }
        public abstract int Size { get; }
        public abstract string Path { get; set; }
        public abstract string GetFullPath();
        public abstract IStructure FindObjectByPath(string path);
        public abstract List<IStructure> Children { get; set; }
        public abstract void AddChild(IStructure structure);
    }
}

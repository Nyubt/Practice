using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task2
{
    public interface IStructure
    {
        string Name { get; set; }
        IStructure Parent { get; set; }
        List<IStructure> Children { get; set; }
        int Size { get; }
        string GetFullPath();
        IStructure FindObjectByPath(string path);
    }
}

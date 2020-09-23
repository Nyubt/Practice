using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task6
{
    public abstract class IStructureWithChildren : IStructure
    {
        List<IStructure> Children {get;set;}
        //void AddChild(IStructure structure);
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    public abstract class IMemorySection
    {
        public abstract string Name { get; set; }
        public abstract bool IsSymbol { get; set; }
        public abstract void ShowSection();
        public abstract IMemorySection SelectSymbolSection(IMemorySection section);
    }
}

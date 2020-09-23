using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    public interface IMemorySection
    {
        string Name { get; set; }
        bool IsSymbol { get; set; }
        void ShowSection();
        IMemorySection SelectSymbolSection(IMemorySection section);
    }
}

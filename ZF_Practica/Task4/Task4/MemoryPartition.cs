using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    public class MemoryPartition
    {
        public string Name { get; set; }
        public string StartAddress { get; set; }
        public string EndAddress { get; set; }
        /// <summary>
        /// MemoryPartition constructor
        /// </summary>
        /// <param name="name">Name of the partition</param>
        /// <param name="startAddress">Starting address of the partition</param>
        /// <param name="endAddress">Ending address of the partition</param>
        public MemoryPartition(string name, string startAddress, string endAddress)
        {
            Name = name;
            StartAddress = startAddress;
            EndAddress = endAddress;
        }
    }
}

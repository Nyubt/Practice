using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Task4
{
    public class MemoryPartitionsParser
    {
        protected List<IMemorySection> MemoryPartitionList;
        /// <summary>
        /// MemoryPartitionsParser constructor
        /// </summary>
        /// <param name="path">path to file</param>
        public MemoryPartitionsParser(string text)
        {
            MemoryPartitionList = new List<IMemorySection>();
            ParseText(text);
        }
        /// <summary>
        /// Text parser to identify all MemoryPartitions
        /// </summary>
        private void ParseText(string text)
        {
            Regex pattern = new Regex(@"MPU region: ([^\*]+) .+\n.+StartAddress[\s=\*\/\(]+(?:uint32\)|)&?([^\),\s]+),.*\n.+EndAddress[\s=\*\/\(]+(?:uint32\)|)&?([^\)\s]+)(?:\s+\/\*|\n)");
            MatchCollection matches = pattern.Matches(text);
            foreach (Match match in matches)
            {
                string name = match.Groups[1].Value;
                string startAddress = match.Groups[2].Value;
                string endAddress = match.Groups[3].Value;
                MemoryPartitionList.Add(new MemorySection<string>(name, startAddress, endAddress, false));
            }
        }
        /// <summary>
        /// Return MemoryPartition list
        /// </summary>
        /// <returns></returns>
        public List<IMemorySection> GetMemoryPartitions()
        {
            return MemoryPartitionList;
        }
    }
}

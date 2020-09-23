using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Task4
{
    public class MemorySectionParser
    {
        protected List<IMemorySection> MemorySectionAddressList;
        protected List<IMemorySection> MemorySectionSymbolList;
        /// <summary>
        /// MemorySectionParser constructor
        /// </summary>
        /// <param name="path">path to file</param>
        public MemorySectionParser(string text)
        {
            MemorySectionAddressList = new List<IMemorySection>();
            MemorySectionSymbolList = new List<IMemorySection>();
            ParseText(text);
        }
        /// <summary>
        /// Text parser to identify all IMemorySection
        /// </summary>
        private void ParseText(string text)
        {
            ParseSectionAddress(text);
            ParseSectionSymbol(text);
        }
        /// <summary>
        /// Text parser to identify all Manul Addresses sections
        /// </summary>
        private void ParseSectionAddress(string text)
        {
            Regex addressPattern = new Regex(@"PARTITIONING_SECTIONS_MANUAL_ADDRESSES ?= ?(.+)");
            MatchCollection sections = addressPattern.Matches(text);
            foreach (Match section in sections)
            {
                Regex pattern = new Regex(@"([\w]+)\[([\w]+)\W+([\w]+)\W");
                MatchCollection matches = pattern.Matches(section.Groups[1].Value);
                foreach (Match match in matches)
                {
                    string name = match.Groups[1].Value;
                    //int startAddress = int64.Parse(match.Groups[2].Value, System.Globalization.NumberStyles.HexNumber);
                    long startAddress = Convert.ToInt64(match.Groups[2].Value, 16);
                    //int endAddress = int64.Parse(match.Groups[3].Value, System.Globalization.NumberStyles.HexNumber);
                    long endAddress = Convert.ToInt64(match.Groups[3].Value, 16);
                    MemorySectionAddressList.Add(new MemorySection<long>(name, startAddress, endAddress, false));
                }
            }
        }
        /// <summary>
        /// Text parser to identify all Manual Symbols sections
        /// </summary>
        private void ParseSectionSymbol(string text)
        {
            Regex addressPattern = new Regex(@"PARTITIONING_SECTIONS_MANUAL_SYMBOLS ?= ?(.+)");
            MatchCollection sections = addressPattern.Matches(text);
            foreach (Match section in sections)
            {
                Regex pattern = new Regex(@"([\w]+)\[([\w]+)\W+([\w]+)\W");
                MatchCollection matches = pattern.Matches(section.Groups[1].Value);
                foreach (Match match in matches)
                {
                    string name = match.Groups[1].Value;
                    string startAddress = match.Groups[2].Value;
                    string endAddress = match.Groups[3].Value;
                    MemorySectionSymbolList.Add(new MemorySection<string>(name, startAddress, endAddress, true));
                }
            }
        }
        /// <summary>
        /// Return MemorySection<int> list
        /// </summary>
        /// <returns></returns>
        public List<IMemorySection> GetMemorySectionAddresses()
        {
            return MemorySectionAddressList;
        }
        /// <summary>
        /// Return MemorySection<string> list
        /// </summary>
        /// <returns></returns>
        public List<IMemorySection> GetMemorySectionSymbols()
        {
            return MemorySectionSymbolList;
        }
    }
}

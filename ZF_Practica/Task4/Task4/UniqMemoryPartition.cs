using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    public class UniqMemoryPartition
    {
        private Dictionary<string, IMemorySection> FinalList;

        public UniqMemoryPartition()
        {
            FinalList = new Dictionary<string, IMemorySection>();
        }

        public void UpdateList(List<IMemorySection> memoryList)
        {
            foreach (IMemorySection obj in memoryList)
            {
                if (FinalList.ContainsKey(obj.Name))
                {
                    FinalList[obj.Name] = FinalList[obj.Name].SelectSymbolSection(obj);
                }
                else
                {
                    FinalList.Add(obj.Name, obj);
                }
            }
        }

        public Dictionary<string, IMemorySection> GetUniqMemoryPartition()
        {
            return FinalList;
        }
    }
}

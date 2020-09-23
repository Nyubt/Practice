using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    class Program
    {
        static void Main(string[] args)
        {
            string path = "C:\\Users\\Elena\\source\\repos\\ZF_Practica\\Task4\\Os_Hal_MemoryProtection_Lcfg.c";
            TextReader text0 = new TextReader(path);
            MemoryPartitionsParser mpp0 = new MemoryPartitionsParser(text0.Text);
            List<IMemorySection> MemoryPartitionsList0 = mpp0.GetMemoryPartitions();
            /*foreach(MemoryPartition partition in MemoryPartitionsList)
            {
                Console.WriteLine("Name: {0} \nStart: {1} \nEnd: {2}\n", partition.Name, partition.StartAddress, partition.EndAddress);
            }*/

            path = "C:\\Users\\Elena\\source\\repos\\ZF_Practica\\Task4\\Os_Hal_MemoryProtection_Lcfg2.c";
            TextReader text1 = new TextReader(path);
            MemoryPartitionsParser mpp = new MemoryPartitionsParser(text1.Text);
            List<IMemorySection> MemoryPartitionsList = mpp.GetMemoryPartitions();
            /*foreach(MemoryPartition partition in MemoryPartitionsList)
            {
                Console.WriteLine("Name: {0} \nStart: {1} \nEnd: {2}\n", partition.Name, partition.StartAddress, partition.EndAddress);
            }*/

            path = "C:\\Users\\Elena\\source\\repos\\ZF_Practica\\Task4\\New Text Document.txt";
            TextReader text2 = new TextReader(path);
            MemorySectionParser msp = new MemorySectionParser(text2.Text);
            List<IMemorySection> MemorySectionAddressesList = msp.GetMemorySectionAddresses();
            /*foreach (IMemorySection partition in MemorySectionAddressesList)
            {
                partition.ShowSection();
            }*/
            List<IMemorySection> MemorySectionSymbolsList = msp.GetMemorySectionSymbols();
            /*foreach (IMemorySection partition in MemorySectionSymbolsList)
            {
                partition.ShowSection();
            }*/

            var FinalList = new UniqMemoryPartition();
            FinalList.UpdateList(MemorySectionSymbolsList);
            FinalList.UpdateList(MemorySectionAddressesList);
            FinalList.UpdateList(MemoryPartitionsList);

            int counter = 0;
            foreach (KeyValuePair<string,IMemorySection> partition in FinalList.GetUniqMemoryPartition())
            {
                Console.WriteLine(counter++);
                partition.Value.ShowSection();
            }

            Console.ReadLine();
        }
    }
}

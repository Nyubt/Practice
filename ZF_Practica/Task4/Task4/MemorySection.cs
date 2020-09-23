using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    public class MemorySection<T> : IMemorySection
    {
        public override string Name { get; set; }
        public T StartAddress { get; set; }
        public T EndAddress { get; set; }
        public override bool IsSymbol { get; set; }
        /// <summary>
        /// MemorySection constructor
        /// </summary>
        /// <param name="name">Name of the section</param>
        /// <param name="startAddress">Starting address of the section</param>
        /// <param name="endAddress">Ending address of the section</param>
        public MemorySection(string name, T startAddress, T endAddress, bool isSymbol)
        {
            Name = name;
            StartAddress = startAddress;
            EndAddress = endAddress;
            IsSymbol = isSymbol;
        }
        /// <summary>
        /// Returns section based on the IsSymbol property
        /// </summary>
        /// <param name="section"></param>
        /// <returns></returns>
        public override IMemorySection SelectSymbolSection(IMemorySection section)
        {
            return IsSymbol ? this : section;
        }
        /// <summary>
        /// Prints information about the Section
        /// </summary>
        public override void ShowSection()
        {
            Console.WriteLine("Name: " + Name);
            Console.WriteLine("Start: " + StartAddress.ToString());
            Console.WriteLine("End: " + EndAddress.ToString());
        }
        /*public override bool Equals(Object obj)
        {
            MemorySection<T> personObj = obj as MemorySection<T>;
            if (personObj == null)
                return false;
            else
                return Name.Equals(personObj.Name) && StartAddress.Equals(personObj.StartAddress) &&
                    EndAddress.Equals(personObj.EndAddress) && IsSymbol.Equals(personObj.IsSymbol);
        }

        public override int GetHashCode()
        {
            var hashCode = -978731786;
            hashCode = hashCode * -1521134295 + EqualityComparer<string>.Default.GetHashCode(Name);
            hashCode = hashCode * -1521134295 + EqualityComparer<T>.Default.GetHashCode(StartAddress);
            hashCode = hashCode * -1521134295 + EqualityComparer<T>.Default.GetHashCode(EndAddress);
            hashCode = hashCode * -1521134295 + IsSymbol.GetHashCode();
            return hashCode;
        }*/
    }
}

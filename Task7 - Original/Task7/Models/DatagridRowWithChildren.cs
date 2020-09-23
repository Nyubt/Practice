using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task7.Models
{
    public class DatagridRowWithChildren : IDatagridRow
    {
        public string Name { get; set; } = "TOTAL";
        public int RAM { get; set; } = -1;
        private string usage;
        public string Usage { get {
                Random rnd = new Random();
                usage = rnd.Next(1, 100).ToString();
                return rnd.Next(1, 100).ToString() + "%";
            }
            set
            {
                usage = value;
            }
        }
        public int Budget { get; set; } = -1;
        public int Size { get; set; } = -1;
    }
}

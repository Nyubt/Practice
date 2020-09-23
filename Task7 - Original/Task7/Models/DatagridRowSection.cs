using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task7.Models
{
    public class DatagridRowSection : IDatagridRow
    {
        public string Name { get; set; }
        public int RAM { get; set; }
        public string SectionName { get; set; }
        public long Address { get; set; }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task7.Models
{
    public interface IDatagridRow
    {
        string Name { get; set; }
        int RAM { get; set; }
    }
}

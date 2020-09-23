using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using Task4;
using Task6;
using Task7.Models;

namespace Task7.ViewModels
{
    public class DataTableStructure : INotifyPropertyChanged
    {
        private string _path;
        public string Path { 
            get
            {
                return _path;
            }
            private set
            {
                _path = value;
                OnPropertyChanged("Path");
            }
        }
        private DataTable _gridSource;
        public DataTable GridSourceDataTable
        {
            get
            {
                return _gridSource;
            }
            private set
            {
                _gridSource = value;
                OnPropertyChanged("GridSourceDataTable");
            }
        }
        private DataTable _partitionsSource;
        public DataTable PartitionsSourceDataTable
        {
            get
            {
                return _partitionsSource;
            }
            private set
            {
                _partitionsSource = value;
                OnPropertyChanged("PartitionsSourceDataTable");
            }
        }

        public DataTableStructure()
        {
            GridSourceDataTable = new DataTable();
            PartitionsSourceDataTable = new DataTable();
        }

        public event PropertyChangedEventHandler PropertyChanged;

        public void GeneratePartitionsTable(MemorySection<string> memorySection)
        {
            _partitionsSource = new DataTable();
            _partitionsSource.Columns.Add("Name", typeof(string));
            _partitionsSource.Columns.Add("Start Address", typeof(string));
            _partitionsSource.Columns.Add("End Address", typeof(string));
            
            DataRow _row = _partitionsSource.NewRow();            
            _row["Name"] = memorySection.Name;
            _row["Start Address"] = memorySection.StartAddress;
            _row["End Address"] = memorySection.EndAddress;

            _partitionsSource.Rows.Add(_row);
            OnPropertyChanged("PartitionsSourceDataTable");
        }

        public void GenerateDataTable(IStructure structure)
        {
            _gridSource = new DataTable();
            bool _isarchive = HasArchives(structure);
            _gridSource.Columns.Add("Name", typeof(string));
            _gridSource.Columns.Add("RAM", typeof(int));
            if (!_isarchive) {
                _gridSource.Columns.Add("Section Name", typeof(string));
                _gridSource.Columns.Add("Address", typeof(long));
            }
            else
            {
                _gridSource.Columns.Add("Usage", typeof(string));
                _gridSource.Columns.Add("Budget", typeof(string));
                _gridSource.Columns.Add("Size", typeof(string));
            }

            if (_isarchive)
            {
                Random rnd = new Random();
                int usage = 0;
                DataRow _frow = _gridSource.NewRow();
                _frow["Name"] = "TOTAL";
                _frow["RAM"] = structure.Size;
                _frow["Usage"] = usage.ToString() + "%";
                _frow["Budget"] = -1;
                _frow["Size"] = -1;
                _gridSource.Rows.Add(_frow);

                var containers = structure.Children.Where(c => !(c is Section));
                foreach (IStructure child in containers)
                {
                    DataRow _drow = _gridSource.NewRow();
                    _drow["Name"] = child.Name;
                    _drow["RAM"] = child.Size;
                    int localUsage = rnd.Next(1, 150);
                    usage += localUsage;
                    _drow["Usage"] = localUsage.ToString() + "%";
                    _drow["Budget"] = -1;
                    _drow["Size"] = -1;
                    _gridSource.Rows.Add(_drow);
                }
                _gridSource.Rows[0].SetField("Usage", usage.ToString() + "%");
            }
            else
            {
                DataRow _drow = _gridSource.NewRow();
                _drow["Name"] = "TOTAL";
                _drow["RAM"] = structure.Size;
                _drow["Section Name"] = structure.Name;
                if ((structure as Section) != null)
                {
                    _drow["Address"] = (structure as Section).Address;
                }
                _gridSource.Rows.Add(_drow);

                var sections = structure.Children.Where(c => c is Section);
                foreach (Section child in sections)
                {
                    _drow = _gridSource.NewRow();
                    _drow["Name"] = child.Name;
                    _drow["RAM"] = child.Size;
                    _drow["Section Name"] = child.Name;
                    _drow["Address"] = child.Address;
                    _gridSource.Rows.Add(_drow);
                }
            }
            Path = structure.GetFullPath();

            OnPropertyChanged("GridSourceDataTable");
        }

        private bool HasArchives(IStructure structure)
        {
            foreach (IStructure child in structure.Children)
            {
                if (child is Archive)
                {
                    return true;
                }
            }
            return false;
        }

        protected void OnPropertyChanged([CallerMemberName] string name = null)
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
        }
    }
}

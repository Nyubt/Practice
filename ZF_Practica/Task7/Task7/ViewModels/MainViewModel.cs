using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Net.Http.Headers;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using Task4;
using Task6;
using Task7.Models;
using Task7.ViewModels.Commands;

namespace Task7.ViewModels
{
    /// <summary>
    /// Main class set as MainWindow's DataContext
    /// </summary>
    public class MainViewModel : INotifyPropertyChanged
    {
        public ObservableCollection<IStructure> Tree { get; private set; } = new ObservableCollection<IStructure>();

        public ObservableCollection<IMemorySection> PartitionsTree { get; private set; } = new ObservableCollection<IMemorySection>();

        public DataTableStructure DataGrid { get; private set; } = new DataTableStructure();

        public DatagridPreviewCommand DatagridPreviewCommand { get; private set; }

        public PartitionsDatagridPreviewCommand PartitionsDatagridPreviewCommand { get; private set; }

        public OpenCommand OpenCommand { get; private set; }

        public ExportCommand ExportCommand { get; private set; }

        public OpenHelpCommand OpenHelpCommand { get; private set; }

        public OpenAboutCommand OpenAboutCommand { get; private set; }

        public CloseWindowCommand CloseWindowCommand { get; private set; }

        public PartitionsViewCommand PartitionsViewCommand { get; private set; }

        public ViewEnum RadioOptions { get; private set; } = ViewEnum.All;

        private Visibility _firstTabVisble = Visibility.Visible;
        private Visibility _secondTabVisible = Visibility.Visible;
        public Visibility IsFirstTabVisible {
            get
            {
                return _firstTabVisble;
            }
            private set 
            {
                _firstTabVisble = value;
                OnPropertyChanged("IsFirstTabVisible");
            } 
        }
        public Visibility IsSecondTabVisible {
            get
            {
                return _secondTabVisible;
            }
            private set
            {
                _secondTabVisible = value;
                OnPropertyChanged("IsSecondTabVisible");
            }
        }

        private static int _selected;
        public int Selected
        {
            get
            {
                return _selected;
            }
            set
            {
                _selected = value;
                if (value == 0)
                {
                    IsOrigGridShown = Visibility.Visible;
                    IsMemGridShown = Visibility.Collapsed;
                }
                else
                {
                    IsMemGridShown = Visibility.Visible;
                    IsOrigGridShown = Visibility.Collapsed;
                }
                OnPropertyChanged("Selected");
            }
        }

        private Visibility _isOrigGridShown = (_selected == 0) ? Visibility.Visible : Visibility.Collapsed;
        public Visibility IsOrigGridShown
        {
            get
            {
                return _isOrigGridShown;
            }
            private set
            {
                _isOrigGridShown = value;
                OnPropertyChanged("IsOrigGridShown");
            }
        }

        private Visibility _isMemGridShown = (_selected == 1) ? Visibility.Visible : Visibility.Collapsed;
        public Visibility IsMemGridShown
        {
            get
            {
                return _isMemGridShown;
            }
            private set
            {
                _isMemGridShown = value;
                OnPropertyChanged("IsMemGridShown");
            }
        }

        public MainViewModel()
        {
            DatagridPreviewCommand = new DatagridPreviewCommand(this);
            PartitionsDatagridPreviewCommand = new PartitionsDatagridPreviewCommand(this);
            OpenCommand = new OpenCommand(this);
            ExportCommand = new ExportCommand(this);
            OpenHelpCommand = new OpenHelpCommand();
            OpenAboutCommand = new OpenAboutCommand();
            CloseWindowCommand = new CloseWindowCommand();
            PartitionsViewCommand = new PartitionsViewCommand(this);
        }

        public void PopulateTree(IEnumerable<IStructure> tree)
        {
            Tree.Clear();
            foreach (var item in tree)
            {
                Tree.Add(item);
            }
        }

        public void PopulatePartitionsTree(IEnumerable<IMemorySection> tree)
        {
            PartitionsTree.Clear();            
            foreach (var item in tree)
            {
                PartitionsTree.Add(item);
            }
        }

        public void PopulateGrid(IStructure structure)
        {
            DataGrid.GenerateDataTable(structure);
            ExportCommand.OnCanExecuteChanged(this, new EventArgs());
        }

        public void PopulatePartitionsGrid(MemorySection<string> structure)
        {
            DataGrid.GeneratePartitionsTable(structure);
        }

        public void SelectView(ViewEnum view)
        {
            RadioOptions = view;
            switch (view)
            {
                case ViewEnum.Orig:
                    IsFirstTabVisible = Visibility.Visible;
                    IsSecondTabVisible = Visibility.Collapsed;
                    Selected = 0;
                    break;
                case ViewEnum.Mem:
                    IsFirstTabVisible = Visibility.Collapsed;
                    IsSecondTabVisible = Visibility.Visible;
                    Selected = 1;
                    break;
                default:
                    IsFirstTabVisible = IsSecondTabVisible = Visibility.Visible;
                    break;
            }
            OnPropertyChanged("RadioOptions");
        }

        protected void OnPropertyChanged([CallerMemberName] string name = null)
        {
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(name));
        }

        public event PropertyChangedEventHandler PropertyChanged;
    }
}

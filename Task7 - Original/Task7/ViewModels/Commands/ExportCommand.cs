using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;

namespace Task7.ViewModels.Commands
{
    public class ExportCommand : ICommand
    {
        private readonly MainViewModel viewModel;
        private ExportOptions _exportOptions;

        public ExportCommand(MainViewModel viewModel)
        {
            this.viewModel = viewModel;
            _exportOptions = new ExportOptions();
        }

        public bool CanExecute(object parameter)
        {
            return this.viewModel.DataGrid.GridSourceDataTable.Rows.Count > 0;
        }

        public void Execute(object parameter)
        {
            _exportOptions.SaveCSV(this.viewModel.DataGrid.GridSourceDataTable);
        }

        public void OnCanExecuteChanged(object sender, EventArgs e)
        {
            CanExecuteChanged?.Invoke(sender, e);
        }

        public event EventHandler CanExecuteChanged;
    }
}

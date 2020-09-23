using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using Task4;

namespace Task7.ViewModels.Commands
{
    /// <summary>
    /// Command to populate the partitions datagrid on mouse click
    /// </summary>
    public class PartitionsDatagridPreviewCommand : ICommand
    {
        private readonly MainViewModel viewModel;

        public PartitionsDatagridPreviewCommand(MainViewModel viewModel)
        {
            this.viewModel = viewModel;
        }

        public void Execute(object parameter)
        {
            viewModel.PopulatePartitionsGrid(parameter as MemorySection<string>);
        }

        public bool CanExecute(object parameter)
        {
            MemorySection<string> param = parameter as MemorySection<string>;
            return param != null;
        }

        public event EventHandler CanExecuteChanged;
    }
}

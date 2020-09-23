using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;
using Task6;

namespace Task7.ViewModels.Commands
{
    /// <summary>
    /// Command to populate the original datagrid on mouse click
    /// </summary>
    public class DatagridPreviewCommand : ICommand
    {
        private readonly MainViewModel viewModel;

        public DatagridPreviewCommand(MainViewModel viewModel)
        {
            this.viewModel = viewModel;
        }

        public void Execute(object parameter)
        {
            viewModel.PopulateGrid(parameter as IStructure);
        }

        public bool CanExecute(object parameter)
        {
            IStructure p = parameter as IStructure;
            return p != null;
        }

        public event EventHandler CanExecuteChanged;
    }
}

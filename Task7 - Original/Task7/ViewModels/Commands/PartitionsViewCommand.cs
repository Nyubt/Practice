using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;
using System.Windows.Input;
using Task7.Models;

namespace Task7.ViewModels.Commands
{
    public class PartitionsViewCommand : ICommand
    {
        private MainViewModel vm;
        public PartitionsViewCommand(MainViewModel vm)
        {
            this.vm = vm;
        }
        public bool CanExecute(object parameter)
        {
            return true;
        }

        public void Execute(object parameter)
        {
            string name = (parameter as MenuItem).Name.Replace("menuTab","");
            Enum.TryParse(name, out ViewEnum viewMode);
            vm.SelectView(viewMode);
        }

        public event EventHandler CanExecuteChanged;
    }
}

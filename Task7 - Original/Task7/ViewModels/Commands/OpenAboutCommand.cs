using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using Task7.Views;

namespace Task7.ViewModels.Commands
{
    public class OpenAboutCommand : ICommand
    {
        public bool CanExecute(object parameter)
        {
            return true;
        }

        public void Execute(object parameter)
        {
            var owner = parameter as Window;
            var win2 = new AboutBox();
            win2.Owner = owner;
            win2.ShowDialog();
        }

        public event EventHandler CanExecuteChanged;
    }
}

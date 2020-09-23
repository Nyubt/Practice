using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;

namespace Task7.ViewModels.Commands
{
    /// <summary>
    /// Command to close the application
    /// </summary>
    public class CloseWindowCommand : ICommand
    {
        public bool CanExecute(object parameter)
        {
            return true;
        }

        public void Execute(object parameter)
        {
            var owner = parameter as Window;
            owner.Close();
        }

        public event EventHandler CanExecuteChanged;
    }
}

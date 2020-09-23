using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace Task7.ViewModels.Commands
{
    public class OpenHelpCommand : ICommand
    {
        private string helpFilePath = @"..\..\Helpers\sample_helpfile.chm";

        public bool CanExecute(object parameter)
        {
            return File.Exists(helpFilePath);
        }

        public void Execute(object parameter)
        {
            System.Diagnostics.Process.Start(helpFilePath);
        }

        public event EventHandler CanExecuteChanged;
    }
}

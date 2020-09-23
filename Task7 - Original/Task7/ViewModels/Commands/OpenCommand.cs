using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Input;
using Task4;
using Task6;
using Task7.Models;

namespace Task7.ViewModels.Commands
{
    public class OpenCommand : ICommand
    {
        private MainViewModel vm;

        private string FileName;

        public OpenCommand(MainViewModel vm)
        {
            this.vm = vm;
        }

        public bool CanExecute(object parameter)
        {
            var values = (object[])parameter;
            var menueAction = (string)values[1];

            return (menueAction != "menuIniReload" || !String.IsNullOrEmpty(FileName));
        }

        public void Execute(object parameter)
        {
            var values = (object[])parameter;
            var showSections = (bool)values[0];
            var menueAction = (string)values[1];

            if (menueAction == "menuIniNew")
            {
                OpenFileDialog dialog = new OpenFileDialog();
                dialog.Filter = "Text Files|*.txt";

                if (dialog.ShowDialog() != true)
                {
                    return;
                }

                FileName = dialog.FileName;
            }

            var _textFile = new StreamReader(FileName);
            var tree = new TreeLogic();

            tree.ShowSections = showSections;
            string line;
            string matchViews;
            string matchPartitionsPath;
            char[] trim = { ' ' };
            try
            {
                while ((line = _textFile.ReadLine()) != null)
                {
                    line = line.TrimEnd(trim);
                    matchViews = Regex.Match(line, "ViewsToDisplay: ?(.+)").Groups[1].Value;
                    matchPartitionsPath = Regex.Match(line, "PartitionsFile: ?(.+)").Groups[1].Value;
                    if (!String.IsNullOrEmpty(matchViews))
                    {
                        Enum.TryParse(matchViews, out ViewEnum viewMode);
                        vm.SelectView(viewMode);
                    }
                    else if (!String.IsNullOrEmpty(matchPartitionsPath))
                    {
                        Task4.TextReader text = new Task4.TextReader(matchPartitionsPath);
                        MemoryPartitionsParser mpp = new MemoryPartitionsParser(text.Text);
                        vm.PopulatePartitionsTree(mpp.GetMemoryPartitions());
                    }
                    else
                    {
                        string[] words = line.Split(',');
                        tree.AddStructure(words);
                    }
                }

                vm.PopulateTree(tree.Root);
            }
            catch (Exception e)
            {
                //MessageBox.Show(e.Message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                MessageBox.Show("Incorrect file format!", "Error", MessageBoxButton.OK, MessageBoxImage.Error);
            }
        }

        public event EventHandler CanExecuteChanged
        {
            add
            {
                CommandManager.RequerySuggested += value;
            }
            remove
            {
                CommandManager.RequerySuggested -= value;
            }
        }
    }
}

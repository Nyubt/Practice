using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using Task7.Views;

namespace Task7
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        protected override void OnStartup(StartupEventArgs e)
        {
            var splashScreen = new WaitIndicator();
            splashScreen.WindowStartupLocation = WindowStartupLocation.CenterScreen;
            this.MainWindow = splashScreen;
            splashScreen.ShowInTaskbar = false;
            splashScreen.WindowStyle = WindowStyle.None;
            splashScreen.Show();

            Task.Factory.StartNew(() =>
            {
                for (int i = 1; i <= 50; i++)
                {
                    Thread.Sleep(30);
                    splashScreen.Dispatcher.Invoke(() => splashScreen);
                }

                this.Dispatcher.Invoke(() =>
                {
                    var mainWindow = new MainWindow();
                    mainWindow.WindowStartupLocation = WindowStartupLocation.CenterScreen;
                    this.MainWindow = mainWindow;
                    mainWindow.Show();
                    splashScreen.Close();
                });
            });
        }    
    }
}

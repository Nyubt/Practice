using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Unity;
using Unity.Injection;
using Task3.Data;
using Unity.Resolution;

namespace Task3
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        static User currentUser;
        public MainWindow()
        {
            InitializeComponent();
            DependencyManager.Start();
            currentUser = DependencyManager.Resolve<User>();
            //container.RegisterType<Account>(new InjectionProperty("Id", ""), new InjectionProperty("Password", ""), new InjectionProperty("Balance", 0));
            //container.RegisterType<Account>();
        }

        private void LogInUserButton_Click(object sender, RoutedEventArgs e)
        {
            //currentUser = container.Resolve<User>();
            string userId = UserID.Text;
            string password = Password.Text;
            currentUser.LogIn(userId, password);
            if (currentUser.LoggedIn)
            {
                ExtractButton.IsEnabled = true;
                InsertButton.IsEnabled = true;
                UserInfo.Text = $"User: {currentUser.Id}\nBalance: {currentUser.UserAccount.Balance}";
            }
            else
            {
                UserInfo.Text = "COULD NOT LOG IN TO THE ACCOUNT";
                ExtractButton.IsEnabled = false;
                InsertButton.IsEnabled = false;
            }
            BankAccounts.Text = "";
        }

        private void OpenAccountButton_Click(object sender, RoutedEventArgs e)
        {
            int sum = string.IsNullOrEmpty(Sum.Text) ? 0 : int.Parse(Sum.Text);
            string userId = UserID.Text;
            string password = Password.Text;
            if (string.IsNullOrEmpty(userId) || string.IsNullOrEmpty(password) || sum == 0)
            {
                BankAccounts.Text = "INCORRECT INPUT";
            }
            else
            {
                /*var account = container.Resolve<Account>(new ResolverOverride[] {
                    new PropertyOverride("Id", userId),
                    new PropertyOverride("Password", password),
                    new PropertyOverride("Balance", sum) });*/
                var account = new Account(userId, password, sum);
                var localBank = DependencyManager.Resolve<Bank>();
                localBank.OpenAccount(userId, account);
                BankAccounts.Text = "ACCOUNT ADDED";
            }
        }

        private void AccountViewButton_Click(object sender, RoutedEventArgs e)
        {
            var localBank = DependencyManager.Resolve<Bank>();
            BankAccounts.Text = localBank.AccountsInfo();
        }

        private void ExtractButton_Click(object sender, RoutedEventArgs e)
        {
            int sum = string.IsNullOrEmpty(Sum.Text) ? 0 : int.Parse(Sum.Text);
            if(sum > 0)
            {
                currentUser.ExtractMoney(sum);
                UserInfo.Text = $"User: {currentUser.Id}\nBalance: {currentUser.UserAccount.Balance}";
            }
        }

        private void InsertButton_Click(object sender, RoutedEventArgs e)
        {
            int sum = string.IsNullOrEmpty(Sum.Text) ? 0 : int.Parse(Sum.Text);
            if (sum > 0)
            {
                currentUser.AddMoney(sum);
                UserInfo.Text = $"User: {currentUser.Id}\nBalance: {currentUser.UserAccount.Balance}";
            }
        }

        private void CloseAccountButton_Click(object sender, RoutedEventArgs e)
        {
            string userId = UserID.Text;
            var localBank = DependencyManager.Resolve<Bank>();
            localBank.CloseAccount(userId);
            BankAccounts.Text = localBank.AccountsInfo();
        }
    }
}

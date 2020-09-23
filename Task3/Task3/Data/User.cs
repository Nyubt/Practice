using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task3.Data
{
    class User
    {
        public string Id { get; private set; }
        public string Password { get; private set; }
        public bool LoggedIn { get; private set; }
        public Account UserAccount { get; private set; }
        private Bank _userBank;
        public User(Bank bank)
        {
            _userBank = bank;
            LoggedIn = false;
        }
        public void LogIn(string id, string password)
        {
            Id = id;
            Password = password;
            UserAccount = _userBank.LogIn(this);
            if (UserAccount != null)
            {
                LoggedIn = true;
            }
            else
            {
                LoggedIn = false;
            }
        }
        public void AddMoney(int sum)
        {
            UserAccount.UpdateBalance(this, sum, true);
        }
        public void ExtractMoney(int sum)
        {
            UserAccount.UpdateBalance(this, sum, false);
        }
    }
}

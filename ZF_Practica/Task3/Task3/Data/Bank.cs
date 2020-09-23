using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace Task3.Data
{
    class Bank 
    {
        List<Account> DB { get; set; }
        public Bank()
        {
            DB = new List<Account>();
        }
        /// <summary>
        /// Create a new account and add to list
        /// </summary>
        /// <param name="userAccount"></param>
        public void OpenAccount(string userId, Account userAccount)
        {
            foreach (var entry in DB)
            {
                if (entry.UserExists(userId))
                {
                    MessageBox.Show("This user already has an acoount");
                    return;
                }
            }
            DB.Add(userAccount);
        }
        /// <summary>
        /// Remove account from list
        /// </summary>
        /// <param name="user"></param>
        public void CloseAccount(string userId)
        {
            foreach (var entry in DB) {
                if (entry.UserExists(userId))
                {
                    DB.Remove(entry);
                    return;
                }
            }
            MessageBox.Show("User could not be found");
        }
        /// <summary>
        /// Get account on log in
        /// </summary>
        /// <param name="user"></param>
        /// <returns></returns>
        public Account LogIn(User user)
        {
            foreach (var entry in DB)
            {
                if (entry.LogIn(user))
                {
                    return entry;
                }
            }
            return null;
        }

        public string AccountsInfo()
        {
            string text = "";
            foreach(var obj in DB)
            {
                text += "User: " + obj.Id + "\nPassword: " + obj.Password + "\nBalance: " + obj.Balance + "\n\n";
            }
            return text;
        }
    }
}

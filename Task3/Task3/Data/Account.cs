using Unity;

namespace Task3.Data
{
    class Account
    {
        public string Id { get; }
        public string Password { get; }
        public int Balance { get; set; }
        public Account(string id, string password, int sum)
        {
            Id = id;
            Password = password;
            Balance = sum;
        }
        /// <summary>
        /// Update account balance
        /// </summary>
        /// <param name="user"></param>
        /// <param name="sum"></param>
        /// <param name="action">0 to decrement, 1 to increment</param>
        public void UpdateBalance(User user, int sum, bool action)
        {
            if (LogIn(user))
            {
                if (action)
                {
                    Balance += sum;
                }
                else
                {
                    if (Balance < sum)
                    {
                        System.Windows.MessageBox.Show("Insufficient funds");
                    }
                    else
                    {
                        Balance -= sum;
                    }
                }
            }
        }
        public bool LogIn(User user)
        {
            return (user.Id == Id && user.Password == Password);
        }
        public bool UserExists(string userId)
        {
            return userId == Id;
        }
    }
}

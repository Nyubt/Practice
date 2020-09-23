using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task4
{
    public class TextReader
    {
        public string Text { get; set; }
        public TextReader(string path)
        {
            PathValidation(path);
        }
        /// <summary>
        /// Validation to determine if the file is parseable
        /// </summary>
        /// <param name="path">>path to file</param>
        private void PathValidation(string path)
        {
            try
            {
                Text = System.IO.File.ReadAllText(path);
            }
            catch (FileNotFoundException e)
            {
                Text = "";
                Console.WriteLine(e.Message);
            }
        }
    }
}

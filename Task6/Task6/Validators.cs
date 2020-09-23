using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace Task6
{
    public static class Validators
    {
        /// <summary>
        /// Path string validator
        /// </summary>
        /// <param name="path">full path</param>
        /// <returns></returns>
        public static bool ValidatePath(string path)
        {
            //check for empty string
            if (String.IsNullOrEmpty(path))
            {
                return false;
            }
            //check that string starts with /
            Regex pattern = new Regex(@"^\/");
            Match validMatch = pattern.Match(path);
            if (!validMatch.Success)
            {
                return false;
            }
            //check that there are no "empty" folders
            pattern = new Regex(@"\/([^\/]*)");
            MatchCollection matches = pattern.Matches(path);
            foreach (Match match in matches)
            {
                if (String.IsNullOrEmpty(match.Groups[1].Value))
                {
                    return false;
                }
            }

            return true;
        }
    }
}

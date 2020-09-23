using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace Task2
{
    public static class Validators
    {
        public static bool ValidatePath(string path)
        {
            if (String.IsNullOrEmpty(path))
            {
                return false;
            }
            Regex pattern = new Regex(@"^\/");
            Match validMatch = pattern.Match(path);
            if (!validMatch.Success)
            {
                return false;
            }
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

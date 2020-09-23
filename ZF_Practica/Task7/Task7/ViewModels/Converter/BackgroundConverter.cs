using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Data;

namespace Task7.ViewModels.Converter
{
    /// <summary>
    /// Converter for datagrid values that changes the row color when value > 100
    /// </summary>
    public class BackgroundConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value != null && Regex.Match(value.ToString(), "%").Success)
            {
                int match = Int16.Parse(Regex.Match(value.ToString(), "(\\d+)%").Groups[1].Value);
                if (match > 100)
                {
                    return "Salmon";
                }
            }
            return "Transparent";
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }
}

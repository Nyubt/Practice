using System;
using System.Collections.Generic;
using System.Diagnostics;
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

namespace TicTacToe
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private int _player;
        private Button[,] _buttons = new Button[3, 3];
        private SolidColorBrush _defaultColor = new SolidColorBrush(Colors.White);
        public MainWindow()
        {
            InitializeComponent();
            _player = 1;
            CreateButtons();
        }

        private void CreateButtons()
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    Button NewButton = new Button();
                    //NewButton.Content = i.ToString();
                    NewButton.Name = "Button" + i.ToString() + "_" + j.ToString();
                    NewButton.Click += new RoutedEventHandler(PlayButton_Click);
                    NewButton.Margin = new Thickness(10, 0, 10, 10);
                    //NewButton.Background = new SolidColorBrush(Colors.White);
                    //NewButton.FontSize = 18;
                    Grid.SetColumn(NewButton, j);
                    Grid.SetRow(NewButton, i);
                    mainGrid.Children.Add(NewButton);
                    _buttons[i, j] = NewButton;
                }
            }
        }

        private void PlayButton_Click(object sender, RoutedEventArgs e)
        {
            SolidColorBrush currectColor = (SolidColorBrush)sender.GetType().GetProperty("Background").GetValue(sender);
            SolidColorBrush blue = new SolidColorBrush(Colors.Blue);
            SolidColorBrush red = new SolidColorBrush(Colors.Red);
            if (CheckWin())
            {
                return;
            }
            if (currectColor.Color != blue.Color && currectColor.Color != red.Color)
            {
                switch (_player)
                {
                    case 1:
                        sender.GetType().GetProperty("Background").SetValue(sender, blue);
                        if (CheckWin())
                        {
                            MessageBox.Show("Blue Player won!");
                        }
                        _player = 2;
                        break;
                    case 2:
                        sender.GetType().GetProperty("Background").SetValue(sender, red);
                        if (CheckWin())
                        {
                            MessageBox.Show("Red Player won!");
                        }
                        _player = 1;
                        break;
                }
            }
        }

        private bool CheckWin()
        {            
            if (CompareButtonColor(_buttons[0, 0], _buttons[0, 1]) && CompareButtonColor(_buttons[0, 2], _buttons[0, 0]) && 
                !CompareColor(_buttons[0, 2], _defaultColor)) 
            { 
                return true; 
            }
            if (CompareButtonColor(_buttons[1, 0], _buttons[1, 1]) && CompareButtonColor(_buttons[1, 2], _buttons[1, 0]) && 
                !CompareColor(_buttons[1, 0], _defaultColor)) 
            { 
                return true; 
            }
            if (CompareButtonColor(_buttons[2, 0], _buttons[2, 1]) && CompareButtonColor(_buttons[2, 2], _buttons[2, 0]) && 
                !CompareColor(_buttons[2, 0], _defaultColor)) 
            { 
                return true; 
            }
            
            if (CompareButtonColor(_buttons[0, 0], _buttons[1, 0]) && CompareButtonColor(_buttons[2, 0], _buttons[0, 0]) && 
                !CompareColor(_buttons[0, 0], _defaultColor)) 
            { 
                return true; 
            }
            if (CompareButtonColor(_buttons[0, 1], _buttons[1, 1]) && CompareButtonColor(_buttons[2, 1], _buttons[0, 1]) && 
                !CompareColor(_buttons[0, 1], _defaultColor)) 
            { 
                return true; 
            }
            if (CompareButtonColor(_buttons[0, 2], _buttons[1, 2]) && CompareButtonColor(_buttons[2, 2], _buttons[0, 2]) && 
                !CompareColor(_buttons[0, 2], _defaultColor)) 
            { 
                return true; 
            }
            
            if (CompareButtonColor(_buttons[0, 0], _buttons[1, 1]) && CompareButtonColor(_buttons[2, 2], _buttons[0, 0]) && 
                !CompareColor(_buttons[0, 0], _defaultColor)) 
            { 
                return true; 
            }
            if (CompareButtonColor(_buttons[0, 2], _buttons[1, 1]) && CompareButtonColor(_buttons[2, 0], _buttons[1, 1]) && 
                !CompareColor(_buttons[0, 2], _defaultColor)) 
            { 
                return true; 
            }

            return false;
        }

        private bool CompareColor(Button a, SolidColorBrush color)
        {
            return (a.Background as SolidColorBrush).Color == color.Color;
        }

        private bool CompareButtonColor(Button a, Button b)
        {
            return (a.Background as SolidColorBrush).Color == (b.Background as SolidColorBrush).Color;
        }

        private void QuitButton_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void NewGameButton_Click(object sender, RoutedEventArgs e)
        {
            //Process.Start(Application.ResourceAssembly.Location);
            //Application.Current.Shutdown();
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    _buttons[i, j].Background = _defaultColor;
                }
            }
            _player = 1;
        }
    }
}

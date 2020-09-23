using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
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
using Task6;

namespace Task7
{
    /*public class Foo
    {
        public Foo()
        {
            Children = new List<Foo>();
        }
        public int Id { get; set; }
        public string Name { get; set; }
        public IList<Foo> Children { get; set; }
    }

    public class Service
    {
        private readonly Collection<Foo> fooList;

        public IEnumerable<Foo> FooList
        {
            get { return fooList; }
        }

        public Service()
        {
            fooList = new Collection<Foo> { new Foo { Id = 0, Name = "first" }, new Foo { Id = 99, Name = "makka" } };
            fooList[0].Children.Add(new Foo { Id = 1, Name = "second" });
            fooList[0].Children.Add(new Foo { Id = 2, Name = "third" });
            fooList[0].Children[0].Children.Add(new Foo { Id = 3, Name = "fourth" });
        }
    }*/

    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();        
        }
    }
}

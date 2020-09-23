using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task1
{
    class Program
    {
        interface IPrint
        {
            void PrintData();
        }
        interface IShape : IPrint
        {
            double Area();
        }
        interface IShape3D : IShape
        {
            int Volume();
        }
        class Rectangle : IShape
        {
            public int Height { get; set; }
            public int Width { get; set; }

            public Rectangle(int height, int width)
            {
                Height = height;
                Width = width;
            }

            public double Area()
            {
                return Height * Width;
            }

            public void PrintData()
            {
                Console.WriteLine("Height = {0}, width = {1}", Height, Width);
                Console.WriteLine("Area of the rectangle is {0}", Area());
            }
        }
        class Circle : IShape
        {
            public int Radius { get; set; }
            public Circle(int radius)
            {
                Radius = radius;
            }

            public double Area()
            {
                double pi = Math.PI;
                return pi * (Radius * Radius);
            }

            public void PrintData()
            {
                Console.WriteLine("Radus = {0}", Radius);
                Console.WriteLine("Area of the circle is {0}", Area());
            }
        }
        class Parallelepiped : IShape3D
        {
            public int Length { get; set; }
            public int Width { get; set; }
            public int Height { get; set; }
            public Parallelepiped(int length, int width, int height)
            {
                Length = length;
                Width = width;
                Height = height;
            }
            public double Area()
            {
                return 2 * (Length * Width + Length * Height + Width * Height);
            }

            public int Volume()
            {
                return Length * Width * Height;
            }

            public void PrintData()
            {
                Console.WriteLine("Height = {0}, width = {1}, length = {2}", Height, Width, Length);
                Console.WriteLine("Area of the parallelepiped is {0} and volume is {1}", Area(), Volume());
            }
        }
        static void Main(string[] args)
        {
            List<IShape> twoD = new List<IShape>();
            List<IShape3D> threeD = new List<IShape3D>();
            string line;
            char[] trim = { ' ' };
            System.IO.StreamReader file = new System.IO.StreamReader(@"c:\Users\Elena\source\repos\ZF_Practica\Task1\Shapes.txt");

            while ((line = file.ReadLine()) != null)
            {
                line = line.TrimEnd(trim);
                string[] words = line.Split(' ');
                if(words.Length == 3)
                {
                    Parallelepiped obj = new Parallelepiped(int.Parse(words[0]), int.Parse(words[1]), int.Parse(words[2]));
                    threeD.Add(obj);
                }
                if (words.Length == 2)
                {
                    Rectangle obj = new Rectangle(int.Parse(words[0]), int.Parse(words[1]));
                    twoD.Add(obj);
                }
                if (words.Length == 1)
                {
                    Circle obj = new Circle(int.Parse(words[0]));
                    twoD.Add(obj);
                }
            }
            foreach(var elem in twoD)
            {
                elem.PrintData();
            }
            foreach (var elem in threeD)
            {
                elem.PrintData();
            }

            file.Close();

            Console.ReadLine();
        }
    }
}

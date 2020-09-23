using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task6
{
    public class Archive : Subsystem
    {
        /// <summary>
        /// Section constructor for generic method with new() constraint
        /// </summary>
        public Archive() : this("") { }

        /// <summary>
        /// Archive constructor with parameter
        /// </summary>
        /// <param name="name"></param>
        public Archive(string name) : base(name)
        {
            this.Icon = "Icons/gear.ico";
        }

        /// <summary>
        /// Add a child branch to the archive root
        /// </summary>
        /// <param name="child">Child branch</param>
        public override void AddChild(IStructure child)
        {
            if (child is Archive || child is Section)
            {
                child.Parent = this;
                Children.Add(child);
            } else
            {
                Console.WriteLine("Wrong child class");
            }
        }
    }
}

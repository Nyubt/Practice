using System;
using System.Collections.Generic;
using Task2;
using Xunit;

namespace Task2.Tests
{
    public class FileTests
    {
        /*[Fact]
        public void GetFullPath_ShouldReturnPathWhenIsParent()
        {
            //Arrange
            string path = "/F8";

            //Act
            File obj = new File("F8", 10);
            string pathResult = obj.GetFullPath();

            //Assert
            Assert.Equal(path, pathResult);
        }
        
        [Fact]
        public void GetFullPath_ShouldReturnPathWhenFileHasParent()
        {
            //Arrange
            string path = "/S2/F8";

            //Act
            File obj = new File("F8", 10);
            Subsystem sys = new Subsystem("S2");
            sys.AddChild(obj);
            obj.Parent = sys;
            string pathResult = obj.GetFullPath();

            //Assert
            Assert.Equal(path, pathResult);
        }*/

        /*[Fact]
        public void FindObjectByPath_ShouldFindPathToObjectWhenItIsParent()
        {
            //Arrange
            File obj = new File("F6", 10);
            string path = "/F6";

            //Act
            IStructure result = obj.FindObjectByPath(path);

            //Assert
            Assert.Equal<IStructure>(obj, result);
        }*/
    }
}

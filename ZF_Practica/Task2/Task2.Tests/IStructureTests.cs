using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Task2;
using Xunit;

namespace Task2.Tests
{
    public class IStructureTests
    {
        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectIsParent), MemberType = typeof(MemberDataHelper))]
        public void GetFullPath_ShouldReturnPathWhenItIsParent(IStructure obj, string expectedPath)
        {
            //Arrange

            //Act
            string pathResult = obj.GetFullPath();

            //Assert
            Assert.Equal(expectedPath, pathResult);
        }

        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectHasParent), MemberType = typeof(MemberDataHelper))]
        public void GetFullPath_ShouldReturnPathWhenHasParent(Subsystem parent, IStructure obj, string expectedPath)
        {
            //Arrange

            //Act
            parent.AddChild(obj);
            string pathResult = obj.GetFullPath();

            //Assert
            Assert.Equal(expectedPath, pathResult);
        }

        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectIsParent), MemberType = typeof(MemberDataHelper))]
        public void FindObjectByPath_ShouldFindPathToObjectWhenItIsParent(IStructure obj, string path)
        {
            //Arrange

            //Act
            IStructure result = obj.FindObjectByPath(path);

            //Assert
            Assert.Equal<IStructure>(obj, result);
        }

        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectHasParent), MemberType = typeof(MemberDataHelper))]
        public void FindObjectByPath_ShouldFindPathToObjectWhenItHasParent(Subsystem parent, IStructure obj, string path)
        {
            //Arrange

            //Act
            parent.AddChild(obj);
            IStructure result = parent.FindObjectByPath(path);

            //Assert
            Assert.Equal<IStructure>(obj, result);
        }

        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectIsParentFalseData), MemberType = typeof(MemberDataHelper))]
        public void FindObjectByPath_ShouldntFindPathToObjectWhenObjectIsParentWithValidWrongPath(IStructure obj, string path)
        {
            //Arrange

            //Act
            IStructure result = obj.FindObjectByPath(path);

            //Assert
            Assert.Null(result);
        }

        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectHasParentFalseData), MemberType = typeof(MemberDataHelper))]
        public void FindObjectByPath_ShouldntFindPathToObjectWhenObjectHasParentWithValidWrongPath(Subsystem parent, IStructure obj, string path)
        {
            //Arrange

            //Act
            parent.AddChild(obj);
            IStructure result = parent.FindObjectByPath(path);

            //Assert
            Assert.Null(result);
        }

        [Theory]
        [MemberData(nameof(MemberDataHelper.ObjectWrongPath), MemberType = typeof(MemberDataHelper))]
        public void FindObjectByPath_ShouldntFindPathInvalidPathException(Subsystem parent, IStructure obj, string path)
        {
            //Arrange

            //Act
            parent.AddChild(obj);

            //Assert
            Assert.Throws<InvalidPathException>(() => parent.FindObjectByPath(path));
        }        
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Task4;
using Xunit;

namespace Task4.Tests
{
    public class UniqMemoryPartitionTests
    {
        [Fact]
        public void UpdateList_ShouldUpdateIfListEmpty()
        {
            //Arrange
            UniqMemoryPartition finalList = new UniqMemoryPartition();
            IMemorySection newPartition = new MemorySection<string>("test", "test", "test", false);
            List<IMemorySection> newList = new List<IMemorySection>();
            newList.Add(newPartition);

            //Act
            finalList.UpdateList(newList);

            //Assert
            Assert.Contains<IMemorySection>(newPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.True(finalList.GetUniqMemoryPartition().Values.Count == 1);
        }

        [Fact]
        public void UpdateList_ShouldUpdateIfNewObjectHasDifferentName()
        {
            //Arrange
            UniqMemoryPartition finalList = new UniqMemoryPartition();
            IMemorySection existingPartition = new MemorySection<string>("test", "test", "test", false);
            IMemorySection newPartition = new MemorySection<string>("test2", "test", "test", false);
            List<IMemorySection> existingList = new List<IMemorySection>();
            List<IMemorySection> newList = new List<IMemorySection>();
            existingList.Add(existingPartition);
            newList.Add(newPartition);
            finalList.UpdateList(existingList);

            //Act
            finalList.UpdateList(newList);

            //Assert
            Assert.Contains<IMemorySection>(existingPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.Contains<IMemorySection>(newPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.True(finalList.GetUniqMemoryPartition().Values.Count == 2);

        }

        [Fact]
        public void UpdateList_ShouldUpdateIfExistingObjectIsNotSectionSymbol()
        {
            //Arrange
            UniqMemoryPartition finalList = new UniqMemoryPartition();
            IMemorySection existingPartition = new MemorySection<string>("test", "test", "test", false);
            IMemorySection newPartition = new MemorySection<string>("test", "test2", "test2", false);
            List<IMemorySection> existingList = new List<IMemorySection>();
            List<IMemorySection> newList = new List<IMemorySection>();
            existingList.Add(existingPartition);
            newList.Add(newPartition);
            finalList.UpdateList(existingList);

            //Act
            finalList.UpdateList(newList);

            //Assert
            Assert.DoesNotContain<IMemorySection>(existingPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.Contains<IMemorySection>(newPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.True(finalList.GetUniqMemoryPartition().Values.Count == 1);
        }

        [Fact]
        public void UpdateList_ShouldntUpdateIfExistingObjectIsSectionSymbolAndNewHasSameName()
        {
            //Arrange
            UniqMemoryPartition finalList = new UniqMemoryPartition();
            IMemorySection existingPartition = new MemorySection<string>("test", "test", "test", true);
            IMemorySection newPartition = new MemorySection<string>("test", "test1", "test1", false);
            List<IMemorySection> existingList = new List<IMemorySection>();
            List<IMemorySection> newList = new List<IMemorySection>();
            existingList.Add(existingPartition);
            newList.Add(newPartition);
            finalList.UpdateList(existingList);

            //Act
            finalList.UpdateList(newList);

            //Assert
            Assert.Contains<IMemorySection>(existingPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.DoesNotContain<IMemorySection>(newPartition, finalList.GetUniqMemoryPartition().Values);
            Assert.True(finalList.GetUniqMemoryPartition().Values.Count == 1);
        }
    }
}

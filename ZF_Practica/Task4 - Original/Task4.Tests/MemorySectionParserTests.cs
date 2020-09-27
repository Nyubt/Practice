using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Task4;
using Xunit;

namespace Task4.Tests
{
    public class MemorySectionParserTests
    {
        [Fact]
        public void ParseSectionAddress_ShouldFindSelectionAddressInText()
        {
            //Arrange
            string text = "PARTITIONING_SECTIONS_MANUAL_ADDRESSES=MySection1[00000F70-00002AD0]";
            IMemorySection newSection = new MemorySection<long>("MySection1", Convert.ToInt32("00000F70", 16), Convert.ToInt32("00002AD0", 16), false);

            //Act
            MemorySectionParser msp = new MemorySectionParser(text);

            //Assert
            Assert.True(msp.GetMemorySectionAddresses().Count == 1);
            Assert.Contains<IMemorySection>(newSection, msp.GetMemorySectionAddresses());
        }

        [Theory]
        [InlineData("MySection1[00000F70-00002AD0]")]
        [InlineData("PARTITIONING_SECTIONS_MANUAL_ADDRESSES=")]
        [InlineData("")]
        public void ParseSectionAddress_ShouldntFindSelectionAddressInIncorrectText(string text)
        {
            //Arrange

            //Act
            MemorySectionParser msp = new MemorySectionParser(text);

            //Assert
            Assert.Equal<IMemorySection>(new List<IMemorySection>(), msp.GetMemorySectionAddresses());
        }

        [Fact]
        public void ParseSectionSymbol_ShouldFindSelectionSymbolInText()
        {
            //Arrange
            string text = "PARTITIONING_SECTIONS_MANUAL_SYMBOLS=ram__dspr1__VP_D[BeginOf_ram__dspr1__VP_D-EndOf_ram__dspr1__VP_D]";
            IMemorySection newSection = new MemorySection<string>("ram__dspr1__VP_D", "BeginOf_ram__dspr1__VP_D", "EndOf_ram__dspr1__VP_D", true);

            //Act
            MemorySectionParser msp = new MemorySectionParser(text);

            //Assert
            Assert.True(msp.GetMemorySectionSymbols().Count == 1);
            Assert.Contains<IMemorySection>(newSection, msp.GetMemorySectionSymbols());
        }

        [Theory]
        [InlineData("ram__dspr1__VP_D[BeginOf_ram__dspr1__VP_D-EndOf_ram__dspr1__VP_D]")]
        [InlineData("PARTITIONING_SECTIONS_MANUAL_SYMBOLS=")]
        [InlineData("")]
        public void ParseSectionSymbol_ShouldntFindSelectionSymbolInIncorrectText(string text)
        {
            //Arrange

            //Act
            MemorySectionParser msp = new MemorySectionParser(text);

            //Assert
            Assert.Equal<IMemorySection>(new List<IMemorySection>(), msp.GetMemorySectionSymbols());
        }
    }
}

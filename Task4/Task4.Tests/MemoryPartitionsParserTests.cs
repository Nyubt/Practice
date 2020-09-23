using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Task4;
using Xunit;

namespace Task4.Tests
{
    public class MemoryPartitionsParserTests
    {
        [Fact]
        public void ParseText_ShouldFindSelectionPartitionInText()
        {
            //Arrange

            string text = @"/* MPU region: ram__dspr0__VP_D */
    /* .StartAddress  = */ (uint32)BeginOf_ram__dspr0__VP_D,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */
    /* .EndAddress    = */ (uint32)EndOf_ram__dspr0__VP_D  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */";
            IMemorySection newPartition = new MemorySection<string>("ram__dspr0__VP_D", "BeginOf_ram__dspr0__VP_D", "EndOf_ram__dspr0__VP_D", false);

            //Act
            MemoryPartitionsParser mpp = new MemoryPartitionsParser(text);

            //Assert
            Assert.True(mpp.GetMemoryPartitions().Count == 1);
            Assert.Contains<IMemorySection>(newPartition, mpp.GetMemoryPartitions());
        }

        [Theory]
        [InlineData("/* MPU region: Stack region */\n/* .EndAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */\n/* .StartAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */")]
        [InlineData("/* MPU region: Stack region */\n/* .StartAddress  = */ (uint32),  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */\n/* .EndAddress    = */ (uint32)0x0uL  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */")]
        [InlineData("/* MPU region: Stack region */\n/* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */\n/* .EndAddress    = */ (uint32)  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */")]
        [InlineData("/* MPU  region: Stack region */\n/* .StartAddress  = */ (uint32)0x0uL,  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */\n/* .EndAddress    = */ (uint32)  /* PRQA S 0306 */ /* MD_Os_Hal_Rule11.4_0306 */")]
        [InlineData("")]
        public void ParseText_ShouldntFindSelectionPartitionInIncorrectText(string text)
        {
            //Arrange

            //Act
            MemoryPartitionsParser mpp = new MemoryPartitionsParser(text);

            //Assert
            Assert.Equal<IMemorySection>(new List<IMemorySection>(), mpp.GetMemoryPartitions());
            Assert.True(mpp.GetMemoryPartitions().Count == 0);
        }
    }
}

using System.Collections.Generic;

namespace Task2.Tests
{
    public static class MemberDataHelper
    {
        public static IEnumerable<object[]> ObjectIsParent =>
            new List<object[]>
            {
                new object[]
                {
                    new File("F8", 10),
                    "/F8"
                },
                new object[]
                {
                    new Subsystem("S2"),
                    "/S2"
                }
            };

        public static IEnumerable<object[]> ObjectIsParentFalseData =>
            new List<object[]>
            {
                new object[]
                {
                    new File("F8", 10),
                    "/F3"
                },
                new object[]
                {
                    new Subsystem("S2"),
                    "/S4"
                }
            };

        public static IEnumerable<object[]> ObjectHasParent =>
            new List<object[]>
            {
                new object[]
                {
                    new Subsystem("S1"),
                    new File("F8", 10),
                    "/S1/F8"
                },
                new object[]
                {
                    new Subsystem("S1"),
                    new Subsystem("S2"),
                    "/S1/S2"
                }
            };

        public static IEnumerable<object[]> ObjectHasParentFalseData =>
            new List<object[]>
            {
                new object[]
                {
                    new Subsystem("S1"),
                    new File("F8", 10),
                    "/S1/F3"
                },
                new object[]
                {
                    new Subsystem("S1"),
                    new Subsystem("S2"),
                    "/S1/S4"
                }
            };

        public static IEnumerable<object[]> ObjectWrongPath =>
            new List<object[]>
            {
                new object[]
                {
                    new Subsystem("S1"),
                    new File("F8", 10),
                    "S1/F8"
                },
                new object[]
                {
                    new Subsystem("S1"),
                    new File("F8", 10),
                    ""
                },
                new object[]
                {
                    new Subsystem("S1"),
                    new Subsystem("S2"),
                    "/"
                },
                new object[]
                {
                    new Subsystem("S1"),
                    new Subsystem("S2"),
                    "//S2"
                },
                new object[]
                {
                    new Subsystem("S1"),
                    new Subsystem("S2"),
                    "/S1//S2"
                }
            };
    }
}

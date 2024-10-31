#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <cmath>
#include "../lab 5.05.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
    TEST_CLASS(UnitTest3)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            int a = 2, b = 2, c = 1, m = 10;
            int V1 = 1, V2 = 2, n = 5;
            std::vector<int> expected = { 1, 2, 5, 6, 7 }; // Expected sequence

            // Act
            std::vector<int> result = pseudorandom_generator(a, b, c, m, V1, V2, n);

            // Assert
            Assert::AreEqual(expected.size(), result.size(), L"Sequence sizes do not match.");
            for (size_t i = 0; i < expected.size(); ++i) {
                Assert::AreEqual(expected[i], result[i], L"Sequence values do not match at index " + std::to_wstring(i));


            }
        };
    };

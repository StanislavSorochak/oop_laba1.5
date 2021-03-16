#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba1.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair pair;
			pair.SetA(5);
			pair.SetB(6);
			int actual = pair.Dobutok(5,6);
			int expected = 30;
			Assert::AreEqual(actual, expected);


		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int t = C(2, 2,depth);
			Assert::AreEqual(t, 1);
		}
	};
}

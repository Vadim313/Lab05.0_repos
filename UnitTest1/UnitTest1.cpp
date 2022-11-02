#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Project1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = pow(k((1 + sqrt(1)), 1 - sqrt(1)), 2) - k(1, 1 + 1);
			Assert::AreEqual(c, -0.71527777777777768);
		}
	};
}

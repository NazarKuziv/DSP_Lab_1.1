#include "pch.h"
#include "CppUnitTest.h"
#include "../DSP_Lab_1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t = AND(1, 1);
			int t1 = AND(1, 0);
			Assert::AreEqual(t, 1);
			Assert::AreEqual(t1, 0);
		};
	};
}
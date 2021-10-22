#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_5_3\Lab_5_3\Lab_5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53I
{
	TEST_CLASS(UnitTest53I)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = y(0.);
			Assert::AreEqual(t, 1.);
		}
	};
}

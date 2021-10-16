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

			t = y(5.);
			Assert::IsTrue(t > 0.999723); // друге число є приблизним результатом, що обчислений за допомогою калькулятора
		}
	};
}

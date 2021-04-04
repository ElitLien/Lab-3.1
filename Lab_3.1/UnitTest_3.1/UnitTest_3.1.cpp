#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.1/Triad.h"
#include "../Lab_3.1/Triad.cpp"
#include "../Lab_3.1/Time.h"
#include "../Lab_3.1/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1, 2, 3);
			a++;
			int b = a.getFirst();
			Assert::AreEqual(b, 0);
		}
	};
}

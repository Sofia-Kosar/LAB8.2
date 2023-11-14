#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB8.2/LAB8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "apple";

			bool result = Available(str);

			Assert::IsTrue(result);

		}
	};
}

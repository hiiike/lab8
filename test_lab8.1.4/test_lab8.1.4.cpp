#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab811
{
	TEST_CLASS(testlab811)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[] = { 'g','w', 'h', 'i', 'l', 'e', 'r', 'i' };
			int t = Count(str);
			Assert::AreEqual(t, 1);

		}

	};
}

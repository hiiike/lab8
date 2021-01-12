#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab811
{
	TEST_CLASS(testlab811)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[] = { 'g','w', 'h', ' ', 'l', 'e', 'r', 'i' };
			int t = count(str);
			Assert::AreEqual(t, 2);

		}

	};
}

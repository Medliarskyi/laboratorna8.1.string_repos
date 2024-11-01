#include "pch.h"
#include "CppUnitTest.h"
#include "../lab81string/lab81string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string testStr = "The quick brown fox jumps over the lazy dog while waiting.";
			std::string letters = "while";

			bool result = containsAllLetters(testStr, letters);
			Assert::IsTrue(result);
		}
	};
}

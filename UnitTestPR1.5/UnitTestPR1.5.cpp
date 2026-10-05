#include "pch.h"
#include "CppUnitTest.h"

#include "E:\Документи\навчання\2 курс ООП\PR1.x\PR1.5\PR1.5\RightAngle.h"
#include "E:\Документи\навчання\2 курс ООП\PR1.x\PR1.5\PR1.5\RightAngle.cpp"
#include "E:\Документи\навчання\2 курс ООП\PR1.x\PR1.5\PR1.5\Pair.h"
#include "E:\Документи\навчання\2 курс ООП\PR1.x\PR1.5\PR1.5\Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestRightAngle)
        {
            RightAngle triangle(3, 4);

            Assert::AreEqual(5.0, triangle.hypotenuse(), 0.001);
            Assert::AreEqual(6.0, triangle.area(), 0.001);
        }
    };
}
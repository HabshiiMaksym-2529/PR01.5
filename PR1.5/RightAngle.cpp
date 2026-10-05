#include "RightAngle.h"

#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

RightAngle::RightAngle()
{
    Init();
}

RightAngle::RightAngle(double a, double b)
{
    Init(a, b);
}

void RightAngle::Init()
{
    sides.Init(0, 0);
}

void RightAngle::Init(double a, double b)
{
    if (a > 0 && b > 0)
    {
        sides.Init(a, b);
    }
    else
    {
        sides.Init(1, 1);
    }
}

Pair RightAngle::getSides() const
{
    return sides;
}

void RightAngle::setSides(double a, double b)
{
    if (a > 0 && b > 0)
    {
        sides.setFirst(a);
        sides.setSecond(b);
    }
    else
    {
        cout << "The sides must be greater than zero." << endl;
    }
}

void RightAngle::Read()
{
    double a, b;

    do
    {
        cout << "Enter first leg: ";
        cin >> a;

        cout << "Enter second leg: ";
        cin >> b;

        if (a <= 0 || b <= 0)
            cout << "The sides must be greater than zero." << endl;

    } while (a <= 0 || b <= 0);

    setSides(a, b);
}

double RightAngle::hypotenuse() const
{
    double a = sides.getFirst();
    double b = sides.getSecond();

    return sqrt(a * a + b * b);
}

double RightAngle::area() const
{
    return sides.product() / 2.0;
}

string RightAngle::toString() const
{
    stringstream sout;

    sout << "Legs: "
        << sides.getFirst()
        << ", "
        << sides.getSecond();

    return sout.str();
}

void RightAngle::Display() const
{
    cout << toString() << endl;
}
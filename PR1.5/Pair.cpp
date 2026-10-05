#include "Pair.h"

#include <iostream>
#include <sstream>

using namespace std;

Pair::Pair()
{
    Init();
}

Pair::Pair(double first, double second)
{
    Init(first, second);
}

void Pair::Init()
{
    first = 0;
    second = 0;
}

void Pair::Init(double first, double second)
{
    this->first = first;
    this->second = second;
}

double Pair::getFirst() const
{
    return first;
}

double Pair::getSecond() const
{
    return second;
}

void Pair::setFirst(double first)
{
    this->first = first;
}

void Pair::setSecond(double second)
{
    this->second = second;
}

void Pair::Read()
{
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    setFirst(a);
    setSecond(b);
}

double Pair::product() const
{
    return first * second;
}

string Pair::toString() const
{
    stringstream sout;

    sout << "(" << first << ", " << second << ")";

    return sout.str();
}

void Pair::Display() const
{
    cout << toString() << endl;
}
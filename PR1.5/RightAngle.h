#pragma once

#include "Pair.h"
#include <string>

class RightAngle
{
private:
    Pair sides;

public:
    RightAngle();
    RightAngle(double a, double b);

    // Методи доступу
    Pair getSides() const;

    void setSides(double a, double b);

    // Обов'язкові методи
    void Init();
    void Init(double a, double b);
    void Read();
    void Display() const;
    std::string toString() const;

    // Операції над трикутником
    double hypotenuse() const;
    double area() const;
};
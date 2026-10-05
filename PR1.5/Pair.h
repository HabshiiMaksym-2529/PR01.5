#pragma once

#include <string>

class Pair
{
private:
    double first;
    double second;

public:
    Pair();
    Pair(double first, double second);

    // Методи доступу
    double getFirst() const;
    double getSecond() const;

    void setFirst(double first);
    void setSecond(double second);

    // Обов'язкові методи
    void Init();
    void Init(double first, double second);
    void Read();
    void Display() const;
    std::string toString() const;

    // Добуток чисел
    double product() const;
};
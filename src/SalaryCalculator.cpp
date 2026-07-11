#include "SalaryCalculator.h"

float SalaryCalculator::calculateGrossSalary(float basicSalary)
{
    float hra = basicSalary * 0.20;
    float da = basicSalary * 0.10;
    float bonus = basicSalary * 0.05;

    return basicSalary + hra + da + bonus;
}

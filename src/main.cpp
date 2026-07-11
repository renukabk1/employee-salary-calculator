#include <iostream>
#include "Employee.h"
#include "SalaryCalculator.h"

using namespace std;

int main()
{
    Employee emp(101, "Renuka", 50000);

    SalaryCalculator calculator;

    float grossSalary = calculator.calculateGrossSalary(emp.basicSalary);

    cout << "Employee ID : " << emp.id << endl;
    cout << "Employee Name : " << emp.name << endl;
    cout << "Basic Salary : " << emp.basicSalary << endl;
    cout << "Gross Salary : " << grossSalary << endl;

    return 0;
}

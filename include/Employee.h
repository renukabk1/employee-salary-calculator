#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
public:
    int id;
    std::string name;
    float basicSalary;

    Employee(int empId, std::string empName, float salary);
};

#endif

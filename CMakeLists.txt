cmake_minimum_required(VERSION 3.10)

project(EmployeeSalaryCalculator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(EmployeeSalaryCalculator
    src/main.cpp
    src/Employee.cpp
    src/SalaryCalculator.cpp
)

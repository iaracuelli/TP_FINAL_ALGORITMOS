#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

namespace UkeleleChicken
{
    class Employee
    {
    private:
        string _code;
        string _name;

    public:
       Employee(string code, string name);
       string getCode();
       string getName();
    };
}

#endif
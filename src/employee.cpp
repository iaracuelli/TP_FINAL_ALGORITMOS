#include "../include/employee.hpp"
using namespace std;

namespace UkeleleChicken
{
    Employee::Employee(string code, string name)
    {
        _code = code;
        _name = name;
    }

    string Employee::getCode()
    {
        return _code;
    }

    string Employee::getName()
    {
        return _name;
    }
}
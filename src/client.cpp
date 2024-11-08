#include "../include/client.hpp"
using namespace std;

namespace UkeleleChicken
{
    Client::Client(string code, string name, string address)
    {
        _code = code;
        _name = name;
        _address = address;
    }

    string Client::getCode()
    {
        return _code;
    }

    string Client::getName()
    {
        return _name;
    }

    string Client::getAddress()
    {
        return _address;
    }
}
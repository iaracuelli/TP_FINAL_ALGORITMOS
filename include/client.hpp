#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
using namespace std;

namespace UkeleleChicken
{
    class Client
    {
    private:
        string _code;
        string _name;
        string _address;
       
    public:
        Client(string code, string name, string address);
        string getCode();
        string getName();
        string getAddress();
      
    };
    
   
}

#endif
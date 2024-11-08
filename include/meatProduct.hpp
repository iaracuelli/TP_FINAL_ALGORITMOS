#ifndef MEATPRODUCT_H
#define MEATPRODUCT_H

#include <iostream>
#include <string>
using namespace std;

namespace UkeleleChicken
{
    class MeatProduct
    {
    private:
        string _code;
        string _name;
        double _price;
    public:
        MeatProduct(string code, string name, double price);
        string getCode();
        string getName();
        double getPrice();
        virtual void showInfo();
        //void changePrice();

    };
    

    
}

#endif
#include "../include/porkProduct.hpp"
#include <iostream>

namespace UkeleleChicken
{
    PorkProduct::PorkProduct(string code, string name, double price)
    : MeatProduct(code, name, price) {}

    void PorkProduct::showInfo()
    {
        cout << "Art. Cerdo - ";
        MeatProduct::showInfo();
    }

}
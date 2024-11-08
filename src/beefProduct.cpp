#include "../include/beefProduct.hpp"
#include <iostream>

namespace UkeleleChicken
{
    BeefProduct::BeefProduct(string code, string name, double price)
    : MeatProduct(code, name, price) {}

    void BeefProduct::showInfo()
    {
        cout << "Art. Vaca - ";
        MeatProduct::showInfo();
    }

}
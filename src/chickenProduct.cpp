#include "../include/chickenProduct.hpp"
#include <iostream>

namespace UkeleleChicken
{
    ChickenProduct::ChickenProduct(string code, string name, double price)
    : MeatProduct(code, name, price) {}

    void ChickenProduct::showInfo()
    {
        cout << "Art. Pollo - ";
        MeatProduct::showInfo();
    }

}
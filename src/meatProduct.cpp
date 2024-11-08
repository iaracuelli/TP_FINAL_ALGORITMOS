#include "../include/meatProduct.hpp"
using namespace std;

namespace UkeleleChicken
{
    MeatProduct::MeatProduct(string code, string name, double price)
    {
        _code = code;
        _name = name;
        _price = price;
    }
    
    string MeatProduct::getCode()
    {
        return _code;
    }

    string MeatProduct::getName()
    {
        return _name;
    }
    
    double MeatProduct::getPrice()
    {
        return _price;
    }
        
    void MeatProduct::showInfo()
    {
        cout << "Codigo: " << _code << "Nombre: " << _name << "--> Precio: $" << _price << endl;
    }

}
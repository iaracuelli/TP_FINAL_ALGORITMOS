#include "../include/item.hpp"
using namespace std;

namespace UkeleleChicken
{
    Item::Item(int amount, MeatProduct* item)
    {
        _amount = amount;
        _item = item;
    }

    int Item::getAmount()
    {
        return _amount;
    }

    MeatProduct* Item::getItem()
    {
        return _item;
    }

    double Item::priceUnit()
    {
        return (_item->getPrice())*_amount;         //precio total para la cantidad del producto
    }

    void Item::show()
    {
        cout << "Producto: " << _item->getName()
             << ", Cantidad: " << _amount
             << ", Precio unitario: $" << _item->getPrice()
             << ", Precio total: $" << priceUnit() << endl;
    }
        
}
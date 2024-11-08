#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "meatProduct.hpp"
using namespace std;

namespace UkeleleChicken
{
    class Item
    {
    private:
        int _amount;            //cantidad del producto
        MeatProduct* _item;       //puntero al producto (MeatProduct o sus subclases)

    public:
        Item(int amount, MeatProduct* item);
        int getAmount();
        MeatProduct* getItem();
        double priceUnit();
        void show();
        
    };
    
    
}

#endif
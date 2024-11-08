#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <list>
#include "client.hpp"
#include "employee.hpp"
#include "item.hpp"
using namespace std;

namespace UkeleleChicken
{
    class Order
    {
    private:
        string _code;
        Client* _client;
        Employee* _employee;
        list<Item*> _items;     //lista de items (productos) en el pedido

    public:
        Order(string code, Client* client, Employee* employee);
        void addItem(Item* item);
        void show();
        double getTotalPrice();
    };
    
}


#endif
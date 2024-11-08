#include "../include/order.hpp"
#include <iostream>

namespace UkeleleChicken
{
    Order::Order(string code, Client* client, Employee* employee)
    {
        _code = code;
        _client = client;
        _employee = employee;
    }
    
    void Order::addItem(Item* item)
    {
        _items.push_back(item);        //agrega al principio
    }

    void Order::show()
    {
        cout << "---------------------------PEDIDO---------------------------" << endl;
        cout << "Numero de Orden: #" << _code << endl;
        cout << "Cliente: " << _client->getName() << endl;
        cout << "Empleado: " << _employee->getName() << endl;
        cout << "Detalles del pedido: " << endl;

        double total = 0;

        for (auto item : _items)
        {
            item->show();           //por cada item, se llama al metodo show
            total += item->priceUnit();         //suma precio total del item

        }

        cout << "Total: $" << total << endl;
    
    }

    double Order::getTotalPrice()
    {
        double total = 0;
        for (auto item : _items)
        {
            total += item->priceUnit();
        }
        
        return total;
    }
}
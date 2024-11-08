#include <iostream>
#include "include/meatProduct.hpp"
#include "include/beefProduct.hpp"
#include "include/chickenProduct.hpp"
#include "include/porkProduct.hpp"
#include "include/employee.hpp"
#include "include/client.hpp"
#include "include/item.hpp"
#include "include/order.hpp"

using namespace UkeleleChicken;

int main()
{
    MeatProduct* product1 = new BeefProduct("B001", "Milanesa de Peceto", 5000.00);
    MeatProduct* product2 = new ChickenProduct("C001", "Pechuga", 6000.00);
    MeatProduct* product3 = new PorkProduct("P001", "Matambre de Cerdo", 7000.00);
    MeatProduct* product4 = new BeefProduct("B002", "Asado de Tira", 8000.00);
    MeatProduct* product5 = new ChickenProduct("C002", "Milanesa de Pollo", 5000.00);

    Item* item1 = new Item(3, product1);
    Item* item2 = new Item(4, product2);
    Item* item3 = new Item(3, product3);
    Item* item4 = new Item(2, product4);
    Item* item5 = new Item(2, product5);

    Client* client1 = new Client("C001", "Silvia Aguirre", "Bolivia 1030");
    Client* client2 = new Client("C002", "Lucas Rodriguez", "Pueyrredón 3338");
    
    Employee* employee = new Employee("E001", "Sofia");

    Order* order1 = new Order("001", client1, employee);
    order1->addItem(item1);
    order1->addItem(item2);
    order1->addItem(item3);

    Order* order2 = new Order("002", client2, employee);
    order2->addItem(item4);
    order2->addItem(item5);
    order2->addItem(item3);


    order1->show();
    order2->show();


    delete item1;
    delete item2;
    delete item3;
    delete item4;
    delete item5;
    delete product1;
    delete product2;
    delete product3;
    delete product4;
    delete product5;
    delete client1;
    delete client2;
    delete employee;
    delete order1;
    delete order2;


    return 0;
}

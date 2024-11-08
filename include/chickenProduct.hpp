#ifndef CHICKENPRODUCT_H
#define CHICKENPRODUCT_H

#include "meatProduct.hpp"
#include <string>

namespace UkeleleChicken
{
    class ChickenProduct : public MeatProduct
    {
        public:
            ChickenProduct(string code, string name, double price);
            void showInfo() override;
    };

}

#endif
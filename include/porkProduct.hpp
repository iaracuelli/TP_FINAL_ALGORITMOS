#ifndef PORKPRODUCT_H
#define PORKPRODUCT_H

#include "meatProduct.hpp"
#include <string>

namespace UkeleleChicken
{
    class PorkProduct : public MeatProduct
    {
        public:
            PorkProduct(string code, string name, double price);
            void showInfo() override;
    };

}

#endif
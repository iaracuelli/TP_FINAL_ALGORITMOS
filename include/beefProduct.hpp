#ifndef BEEFPRODUCT_H
#define BEEFPRODUCT_H

#include "meatProduct.hpp"
#include <string>

namespace UkeleleChicken
{
    class BeefProduct : public MeatProduct
    {
        public:
            BeefProduct(string code, string name, double price);
            void showInfo() override;
    };

}

#endif
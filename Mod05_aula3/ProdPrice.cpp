#include <iostream>

using namespace std;

#include "ProdPrice.hpp"

ProdPrice::ProdPrice(int p1):
price1 (p1)
{

}

void ProdPrice::printPrice() const
{
    cout << "Price = " << price1 << endl;
}

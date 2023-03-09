#include <iostream>
using std::cout;
using std::endl;
#include <cstring>

using namespace std;

#include "ProdNames.hpp"


ProdNames::ProdNames(const char * const prodName1,
                     const ProdPrice &val1):
price1(val1)
{
    int length = strlen(prodName1);
    length = (length<20 ? length : 19);
    strncpy(product1,prodName1, length);
    product1[length] = '\0';
}

void ProdNames::results() const
{
    cout << product1 << " tem o valor igual a ";
    price1.printPrice();
}

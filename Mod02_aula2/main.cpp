#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <string> //classe de string no padrao c++
using std::string;

#include "SalesScore.hpp"

//==================================================
// Desenvolvimento da funcao principal

int main()
{
    SalesScore mySales("WR kits store");

    mySales.bootSystem();
    mySales.calcSalesAverage();

    getchar();
    return 0;

}
// Final do programa
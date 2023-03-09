#include <iostream>

using namespace std;

#include "ProdNames.hpp"

int main()
{

    ProdPrice prod1(52);
    ProdPrice prod2(43);
    ProdNames productName1("Transistor",prod1);
    ProdNames productName2("Capacitor",prod2);

    productName1.results();
    productName2.results();

    cout << "\nFim." <<endl;
    return 0;
}

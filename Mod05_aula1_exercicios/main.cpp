/*
#include <iostream>

using std::cout;
using std::endl;

#include "PrintVal.hpp"

int main()
{
    PrintVal valor;         //declara objeto valor
    PrintVal *valorPtr = &valor; //cria ponteiro para valor
    PrintVal &valorRef = valor;     //declara referencia para valor

    valor.setValue(4);      //acesso por objeto
    valor.printThis();

    valorRef.setValue(8);   //acesso por referencia
    valorRef.printThis();

    valorPtr->setValue(15); //acesso por ponteiro
    valorPtr->printThis();

    cout << "\n\nEnd." << endl;

    return 0;
}
*/
#include "Bhaskara.hpp"

int main()
{
    Bhaskara calc1(1,-4,3);
    Bhaskara calc2(-2,5,-2);
    Bhaskara calc3(4,-8,12);

    calc1.solvesB();
    calc2.solvesB();
    calc3.solvesB();

    cout << "\n\nThe end." << endl;

    return 0;
}


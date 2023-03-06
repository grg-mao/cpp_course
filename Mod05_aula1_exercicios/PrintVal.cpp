#include "PrintVal.hpp"

PrintVal::PrintVal()
{
    valToPrint = 0; //valor padrao de inicio
}

void PrintVal::setValue(int val)
{
    valToPrint = val;
}

void PrintVal::printThis()
{
    cout << "Valor recebido: " << valToPrint << endl;
}

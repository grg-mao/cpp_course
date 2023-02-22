#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

#include "calc.hpp"

int main()
{
    calc calculadora; //criando objeto calculadora
    char opt;

    do
    {
      calculadora.operandos();
      calculadora.operacao();

      cout << "Continuar calculando? n - nao, s - sim. >>> " << endl;
      cin >> opt;

    }while(opt != 'n');

    cout << "Programa encerrado " << endl;


    return 0;
}

/******************************************************************************

Curso C++ Completo WR Kits
Aula 2.4 Switch e Do While - Exercicio
Aluno: Marcelo Diniz
data: 30-08-2022

*******************************************************************************/
#include "Calculadora.hpp"
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    Calculadora myCalc;

    string menu;

    do
    {
      myCalc.exec();
      cout << "Deseja repetir a operação? Digite sim ou nao: ";
      cin >> menu;
    }
    while(menu != "nao");

    return 0;
}

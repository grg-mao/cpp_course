// Classe criada em Feb 21, 2023
// Implementa calculadora
// arquivo .cpp, que contem a implementacao das funcoes membro
//
// ===================================================
// Desenvolvimento das funcoes membro

#include <iostream>
#include <math.h>
#include "calc.hpp"

using std::cout;
using std::cin;
using std::endl;

void calc::operandos()
{
    cout << "Digite o primeiro operando: " << endl;
    cin >> Op1;
    cout << "Digite o segundo operando: " << endl;
    cin >> Op2;
}

void calc::operacao()
{

    cout << "Digite a operacao: +,-,x,/,p" << endl;
    cin >> opr;

    switch(opr)
    {
        case '+':
            cout << Op1 << "+" << Op2 << "=" << Op1 + Op2 <<endl;
            break;
        case '-':
            cout << Op1 << "-" << Op2 << "=" << Op1 - Op2 <<endl;
            break;
        case '*':
            cout << Op1 << "x" << Op2 << "=" << Op1 * Op2 <<endl;
            break;
        case '/':
            cout << Op1 << "/" << Op2 << "=" << Op1 / Op2 <<endl;
            break;
        case 'p':
            cout << Op1 << "^" << Op2 << "=" << pow(Op1,Op2) <<endl;
            break;

        default:
            cout << "Ta de zueira?" << endl;
    }
}


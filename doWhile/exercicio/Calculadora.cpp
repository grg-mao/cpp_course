#include "Calculadora.hpp"

void Calculadora::exec()
{
    cout << "Digite o operando A: ";
    cin >> op1;
    cout << "Digite o operando B: ";
    cin >> op2;
    cout << "Digite uma operação ex.: + | - | * | / | p : ";
    cin >> opt;

    switch (opt)
    {
        case '+':
            adicao(op1,op2);
            break;
        case '-':
            subtracao(op1,op2);
            break;
        case '*':
            multiplicacao(op1,op2);
            break;
        case '/':
            divisao(op1,op2);
            break;
        case 'p':
        case 'P':
            potencia(op1,op2);
            opt = '^';
            break;
    }

     cout << op1 << " " << opt << " " << op2 << " = " << result << endl;

 }

void Calculadora::adicao(float x, float y)
{
    result =  x + y;

}

void Calculadora::subtracao(float x, float y)
{
    result =  x + y;

}

void Calculadora::multiplicacao(float x, float y)
{
    result =  x * y;

}
void Calculadora::divisao(float x, float y)
{
    result =  x / y;

}
void Calculadora::potencia(float x, float y)
{
    result =  pow(x,y);

}

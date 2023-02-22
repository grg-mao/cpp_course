#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

class calc {
public:
    double Op1;
    double Op2;
    char opr;

    void operandos()
    {
        cout << "Digite o primeiro operando: " << endl;
        cin >> Op1;
        cout << "Digite o segundo operando: " << endl;
        cin >> Op2;
    }

    void operacao()
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



};

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

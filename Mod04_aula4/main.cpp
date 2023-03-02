#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int soma(int a, int b, char &sym);
int subt(int a, int b, char &sym);
int mult(int a, int b, char &sym);

void calc(int(*operacao)(int, int, char &), int a, int b);

// =========================================
int main()
{
    calc(mult,5,8);

    return 0;
}
// =========================================

int soma(int a, int b, char &sym)
{
    sym = '+';
    return a+b;
}

int subt(int a, int b, char &sym)
{
    sym = '-';
    return a-b;
}

int mult(int a, int b, char &sym)
{
    sym = '*';
    return a*b;
}

void calc(int(*operacao)(int, int, char &), int a, int b)
{
    char sym = '.'; // apenas inicializando
    int res = (*operacao)(a, b, sym);

    cout << a << sym << b << " = " << res << endl;
}



/* // Primeiro exemplo
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void func(int (*argFunc)(int), int val);
int soma10(int a);

int main()
{
   func(soma10, -2);
}


void func(int (*argFunc)(int), int val)
{
    cout << "Valor inteiro + 10 = " << (*argFunc)(val) << endl;
}

int soma10(int a)
{
    return a+=10;
}
*/

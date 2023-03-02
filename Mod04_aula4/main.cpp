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

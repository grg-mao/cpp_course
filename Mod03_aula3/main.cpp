#include <iostream>

using std::cout;
using std::cin;
using std::endl;

unsigned long fact(unsigned long num);

int main()
{
    int num;

    cout << "Digite um numero para calculo de fatorial: " << endl;
    cin >> num;
    cout << ">>> " << fact(num) << endl;

    return 0;
}

unsigned long fact(unsigned long num)
{
    if(num <= 1)
        return 1;
    else
        return num*fact(num-1);
}

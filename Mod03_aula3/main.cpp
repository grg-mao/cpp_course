#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

void tabuada(unsigned num);


int main()
{
  int num = 0;

  cout << "Digite o valor: " << endl;
  cin >> num;
  tabuada(num);

}

void tabuada(unsigned num)
{
    int static i = 1;

    cout << i << setw(2) << "x" << setw(2) << num << setw(2) << " = " << num*i << endl;
    i++;

    if (i > 10)
    {
        i = 1;
        return;
    }
        tabuada(num);
}




/*
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
    cout << num << endl;
    if(num <= 1)
        return 1;
    else
        return num*fact(num-1);
}
*/

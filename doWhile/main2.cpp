#include <iostream>

using namespace std;

int main()
{
    int opt = 0;

    do
    {
        cout << "Digit 1 para continuar: " << endl;
        cout << "Digit 2 para sair: " << endl;
        cout << ">>>";
        cin >> opt;
    }while(opt != 2);

    return 0;
}

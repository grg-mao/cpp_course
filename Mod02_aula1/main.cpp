#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int val = 13;
/*
    if(val > 12)
        cout << "Valor maior que 12" << endl;
    else
        cout << "Valor menor que 12" << endl;
*/
    cout << (val > 12 ? "Maior que 12" : "Menor que 12");
    //getchar();
    return 0;
}

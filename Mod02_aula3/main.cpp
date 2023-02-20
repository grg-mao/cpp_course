#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Resultado: \n";

    for(int i = 13, j = 5; j < 15; i--, j++)
    {
        cout << i;
        cout << j;
    }

    getchar();
    return 0;
}

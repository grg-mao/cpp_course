#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
using std::strtok;

int main()
{
    char str1[] = "WR Kits C++ Curso Completo";
    char* tokenPtr;

    cout << "Gerar tokens da string: \n" << str1 << "\n\n";

    tokenPtr = strtok(str1, " ");

    while(tokenPtr != NULL)
    {
        cout << tokenPtr << " | ";
        tokenPtr = strtok(NULL, " "); //obtem o proximo token

    }

    cout << "\n\nstr1 resultante: " << str1 << endl;

    return 0;
}

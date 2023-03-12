#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::cerr;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <cstdlib>
using std::exit;

#include <iomanip>
using std::setw;

int main()
{
    char str1[50], str2[50];
    ifstream Arq("Teste.txt",ios::in);

    Arq >> str1 >> str2;

    cout << "String lida: " << str1 << " "<< str2 << endl;

    return 0;
}

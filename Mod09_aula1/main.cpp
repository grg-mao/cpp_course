#include <iostream>

using namespace std;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

int main()
{
    ofstream Arq("Teste.csv",ios::out);

    if(!Arq)
    {
        cerr << "ERRO ao criar arquivo!" << endl;
        exit(1);
    }

    for(int i = 0; i < 20; i++)
    Arq << "Valor = ," << i << "," << i+1 << endl;
    //Separa em tres colunas: 1.Valor = | 2.i | 3.i+1

    Arq.close();

    cout << "Fim" << endl;
    return 0;
}

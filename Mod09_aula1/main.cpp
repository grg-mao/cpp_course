#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::cerr;

#include <fstream>
using std::ofstream;

#include <cstdlib>
using std::exit;

#include <iomanip>
using std::setw;

int main()
{
    int nprod = 0, qInd[10] = {};
    double vInd[10] = {}, soma = 0;


    cout << "Insira quantos tipos de produtos: " << endl;
    cin >> nprod;
    for(int i = 0; i < nprod; i++)
    {
       cout << "Insira qtd e valor do prod" << i+1 << ": ";
       cin >> qInd[i] >> vInd[i];
       soma += qInd[i]*vInd[i];
    }
/*
    for(int j = 0; j < nprod; j++)
    {
        cout << "Prod" << j << setw(4) << qInd[j] <<
               setw(4) << vInd[j] << endl;
    }
*/

    ofstream Arq("Produtos.txt", ios::out);
    if(!Arq)
    {
        cerr << "ERRO ao criar arquivo!" << endl;
        exit(1);
    }

    Arq << "NOME     QTD     VAL     SUBTOTAL" << endl;
    Arq << "---------------------------------" << endl;
    for(int j = 0; j < nprod; j++)
    {
        Arq << "Pro" << j+1 << setw(8) << qInd[j] <<
             setw(8) << vInd[j] << setw(13) <<
             qInd[j]*vInd[j] << endl;
    }
    Arq << "---------------------------------" << endl;
    Arq << "TOTAL GERAL" << setw(22) << soma << endl;

    return 0;
}


/*
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
}*/


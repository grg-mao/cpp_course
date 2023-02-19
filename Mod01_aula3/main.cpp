#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <string> //classe de string no padrao c++
using std::string;
using std::getline;

//==================================================
// Desenvolvimento da classe
class SalesScore
{
    public: //public é um especificador de acesso

        void bootSystem(string storeTitle)
        {
            cout << "Score de vendas: \n" << storeTitle << endl;
        } //end bootSystem
};

//==================================================
// Desenvolvimento da funcao principal

int main()
{
    string storeTitle; // variavel local string para nome da loja
    SalesScore mySales; // objeto mySales

    cout << "Insira o nome da loja: ";
    getline(cin, storeTitle); //ler o nome da loja com espacos em branco
    cout << endl;

    mySales.bootSystem(storeTitle);
    return 0;
}
// Final do programa
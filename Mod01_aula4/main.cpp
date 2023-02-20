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

        void setStoreTitle(string title)
        {
            storeTitle = title;
        }

        string getStoreTitle()
        {
            return storeTitle;
        }

        void bootSystem(string storeTitle)
        {
            cout << "Score de vendas: \n" << storeTitle << endl;
        } //end bootSystem

    private: 

        string storeTitle; //declaracao para um membro de dados
};

//==================================================
// Desenvolvimento da funcao principal

int main()
{
    string storeTitle; // variavel local string para nome da loja
    SalesScore mySales; // objeto mySales

    cout << "Insira o titulo inicial da loja: " << mySales.getStoreTitle() << endl;

    cout << "Insira o nome da loja: " << endl;
    getline(cin, storeTitle); //ler o nome da loja com espacos em branco
    cout << endl;

    mySales.bootSystem(storeTitle);
    return 0;
}
// Final do programa
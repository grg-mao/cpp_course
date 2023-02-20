#include <iostream>

using std::cout;
using std::endl;

#include <string> //classe de string no padrao c++
using std::string;

//==================================================
// Desenvolvimento da classe
class SalesScore
{
    public: //public é um especificador de acesso

        SalesScore(string title)
        {
            setStoreTitle(title);
        }  //end SalesScore

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
    //cria dois objetos SalesScore
    SalesScore myStore1("WR Master Store plus");
    SalesScore myStore2("WR Store");

    cout <<  "Loja 1 criada com sucesso: " << myStore1.getStoreTitle()
         << "\nLoja 2 criada com sucesso: " << myStore2.getStoreTitle();

    while(1);
    return 0;

}
// Final do programa
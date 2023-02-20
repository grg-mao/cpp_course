// Classe criada em Feb 2023
// Implementa o score de vendas em lojas hipoteticas

#include <string> //classe de string no padrao c++
using std::string;

// Desenvolvimento da classe
class SalesScore
{
    public: //public é um especificador de acesso

        SalesScore(string title); //prototipo do construtor
        void setStoreTitle(string title);
        string getStoreTitle();
        void bootSystem(string storeTitle); //prototipo da funcao de inicializacao do sistema

    private: 

        string storeTitle; //declaracao para um membro de dados
};

//==================================================
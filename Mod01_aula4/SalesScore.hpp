// Classe criada em Feb 2023
// Implementa o score de vendas em lojas hipoteticas


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
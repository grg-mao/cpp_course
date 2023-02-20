// Classe criada em Feb 2023
// Implementa o score de vendas em lojas hipoteticas

using std::fixed; //garante que as casas depois da virgula sejam exibidas

#include <iomanip>      //manipuladores de fluxo parametrizado
using std::setprecision;        //precisao da saida numerica
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

        void bootSystem()
        {
            cout << "Score de vendas: \n" << getStoreTitle() << endl;
        } //end bootSystem

        void calcSalesAverage() // funcao-membro para calcular o total e a media de n vendas
        {
            int acc = 0;
            int counter = 0;    //numero de vendas inserida pelo usuario
            int value;      //armazena valor de cada venda
            double avg;     //armazena a media das vendas

            cout << "Insira o valor da venda ou -1 para sair: ";
            cin >> value;

            while(value != -1)
            {
                acc = acc + value;
                counter++;

                cout << "Insira o valor da venda ou -1 para sair: ";
                cin >> value;
            }

            if (counter != 0)
            {
                avg = static_cast< double >(acc)/counter;

                cout << "\nTotal " << counter << " vendas $: " << acc << endl;
                cout << "\nMedia em vendas $: " << setprecision(2) << fixed << avg <<endl;
            }
            else
                cout << "Nenhum valor de venda inserido." << endl;
        }

    private: 

        string storeTitle; //declaracao para um membro de dados
};

//==================================================
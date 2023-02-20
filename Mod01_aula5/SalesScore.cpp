// Classe criada em Feb 2023
// Implementa o score de vendas em lojas hipoteticas
// Arquivo .cpp que contem a implementacao das funcoes-membro

// Desenvolvimento das funcoes-membro
//==================================================
#include <iostream>
using std::cout;
using std::endl;

#include <string> //classe de string no padrao c++
using std::string;
#include "SalesScore.hpp"

SalesScore::SalesScore(string title)
{
    setStoreTitle(title);
}  //end SalesScore

void SalesScore::setStoreTitle(string title)
{
    storeTitle = title;
}

string SalesScore::getStoreTitle()
{
    return storeTitle;
}

void SalesScore::bootSystem(string storeTitle)
{
    cout << "Score de vendas: \n" << storeTitle << endl;
 } //end bootSystem

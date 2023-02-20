#include <iostream>

using std::cout;
using std::endl;

#include <string> //classe de string no padrao c++
using std::string;

#include "SalesScore.hpp"

//==================================================
// Desenvolvimento da funcao principal

int main()
{
    //cria dois objetos SalesScore
    SalesScore myStore1("WR Master Store plus");
    SalesScore myStore2("WR Store new");

    cout <<  "Loja 1 criada com sucesso: " << myStore1.getStoreTitle()
         << "\nLoja 2 criada com sucesso: " << myStore2.getStoreTitle();

    getchar();
    return 0;

}
// Final do programa
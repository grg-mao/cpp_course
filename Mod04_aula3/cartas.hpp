
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

class Cartas
{
    public:
        Cartas(); // construtor
        void sorteia();
        void distribui();

    private:
        int baralho[4][13];

};
/*
//
//  Embaralhamento de Cartas
//  Arquivo hpp
//
//  DEITEL, C++ Como Programar
//
//

// =====================================================
// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib> //prot�tipo das rand e srand
using std::rand;
using std::srand;

#include <ctime>   //prot�tipo para time
using std::time;


// =====================================================
// --- Classe ---
class Cartas
{
  public:
    Cartas();           //construtor
    void sorteia();     //sorteio das cartas
    void distribui();   //distribui��o das cartas

  private:
    int baralho[4][13]; //baralho com 4 naipes e 13 cartas

}; //end class Cartas

// =====================================================
// --- Final do arquivo hpp ---
*/

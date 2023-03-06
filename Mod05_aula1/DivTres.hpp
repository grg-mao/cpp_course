
//
//  DivTres.hpp
//  Dr. Eng. Wagner Rambo, agosto de 2022
//

#ifndef  DIVTRES
#define  DIVTRES

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

const int totalNums = 6;

class DivTres
{
  public:
    DivTres();
    void getNumbers();
    void printResults();

  private:
    void numDivTres(int num[totalNums]);  //fun��o utilit�ria que retorna os n�meros divis�veis por 3
    int numbers[totalNums];               //armazena os valores que o usu�rio digitar
    char found[totalNums+1];              //armazenar� 'Y' quando o index atual for divis�vel por 3 e
                                          // 'N' quando n�o for.

}; //end class DivTres

#endif // DIVTRES

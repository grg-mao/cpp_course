
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
    void numDivTres(int num[totalNums]);  //função utilitária que retorna os números divisíveis por 3
    int numbers[totalNums];               //armazena os valores que o usuário digitar
    char found[totalNums+1];              //armazenará 'Y' quando o index atual for divisível por 3 e
                                          // 'N' quando não for.

}; //end class DivTres

#endif // DIVTRES

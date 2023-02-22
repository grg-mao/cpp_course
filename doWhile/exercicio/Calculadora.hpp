#include <iostream>
#include <math.h>

using std::cout,
      std::cin,
      std::endl,
      std::string;

class Calculadora
{
 public:
     void exec();

 private:
     float  op1, op2, result = 0;
     char opt;
     void adicao(float x, float y);
     void subtracao (float x, float y);
     void multiplicacao (float x, float y);
     void divisao(float x, float y);
     void potencia(float x, float y);

};

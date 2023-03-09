#include <iostream>
#include <math.h>

using namespace std;

//===================================
//-- Classe --
class HipoCalc
{
public:
    HipoCalc(double = 3, double = 4);
    double pitagoras(double, double);
    void printRes() const;

private:
    double _ca;
    double _cb;
    double hipo;
};



//===================================


//===================================
//-- Funcoes-membro da Classe
HipoCalc::HipoCalc(double ca, double cb):
_ca(ca),
_cb(cb)
{
    hipo = pitagoras(_ca,_cb);
}

double HipoCalc::pitagoras(double ca, double cb)
{
    return sqrt(ca*ca+cb*cb);
}

void HipoCalc::printRes() const
{
    cout << "        hipo = " << hipo         << '\n';
    cout << "this -> hipo = " << this->hipo   << '\n';
    cout << "(*this).hipo = " << (*this).hipo << endl;
}

//===================================

//===================================
//-- Funcao Main


int main()
{
    HipoCalc tria1(4,5);

    tria1.printRes();


    return 0;
}

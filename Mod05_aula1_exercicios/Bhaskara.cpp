#include "Bhaskara.hpp"

Bhaskara::Bhaskara(int coef1,int coef2,int coef3)
{
    a = coef1;
    b = coef2;
    c = coef3;
    calcDelta(a,b,c);
}

void Bhaskara::solvesB()
{
    printEq();
    printRes();
}

void Bhaskara::printEq()
{
    cout << "a = " << a
         << " b = " << b
         << " c = " << c << endl;
}

void Bhaskara::printRes()
{
    cout << "x1 = " << x1
         << " and " << "x2 = " << x2 << endl;
}

void Bhaskara::calcDelta(int a,int b,int c)
{
    double delta = 0;
    delta = pow(b,2) - 4*a*c;
    calcRoots(delta,a,b);
    //return delta, a, b, c;
}

double Bhaskara::calcRoots(double delta, int a, int b)
{
    double x1_ = 0, x2_ = 0;
    x1_ = (sqrt(delta)-b)/(2*a);
    x2_ = (-b-sqrt(delta))/(2*a);
    //cout << "x1 = " << x1_ << endl;
    //cout << "x2 = " << x2_ << endl;
    x1 = x1_;
    x2 = x2_;
    return x1, x2;

}

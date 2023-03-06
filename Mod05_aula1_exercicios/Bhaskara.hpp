#ifndef BHASKARA
#define BHASKARA

#include <iostream>
using std::cout;
using std::endl;
#include <cmath>

class Bhaskara
{
    public:
        double delta,
               x1,
               x2;
        int    a,
               b,
               c;
        Bhaskara(int=0,int=0,int=0);
        void solvesB();
        void printEq();
        void printRes();
        void calcDelta(int a,int b,int c);
        double calcRoots(double delta, int a, int b);

    private:

};


#endif // BHASKARA

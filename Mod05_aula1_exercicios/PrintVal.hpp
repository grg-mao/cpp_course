#ifndef PRINTVAL
#define PRINTVAL

#include <iostream>
using std::cout;
using std::endl;

class PrintVal
{
    public:
        PrintVal();
        void setValue(int val);
        void printThis();

    private:
        int valToPrint;

};

#endif // PRINTVAL


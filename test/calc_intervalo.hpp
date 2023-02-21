#include <iostream>
#include <iomanip>


using std::cout,
      std::endl,
      std::cin,
      std::setw;

class calcInterval
{
    public:
        void setIntervalos();
        void calcExec();


    private:
        int xMin,
            xMax,
            y = 0;
        void setY(int intervalo);
};

#include "calc_intervalo.hpp"

void calcInterval::setIntervalos()
{
      cout << "Digite o valor minimo de X: ";
      cin >> xMin;
      cout << "Digite o valor maximo de X: ";
      cin >> xMax;

}
void calcInterval::calcExec()
{
    cout << setw(5) << "X" << setw(10) << "Y" << endl;
    for ( xMin; xMin <= xMax; xMin++)
    {
        setY(xMin);
        cout << setw(5) << xMin << setw(10) << y << endl;
    }


}

void calcInterval::setY(int intervalo)
{
    y = (intervalo * 4) -53;
}

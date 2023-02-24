#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

inline unsigned rangeRandom(unsigned first, unsigned range);
void randomNumber(int number);
void somatorio(unsigned valor);

int colunas;
int min, max;
double acc = 0;

int main()
{
    int number;
    char opt;

    do{
    cout << "Quantos numeros? " << endl;
    cin >> number;

    cout << "Qual a faixa? Menor- Maior- " << endl;
    cin >> min;
    cin >> max;

    cout << "Quantas colunas? " << endl;
    cin >> colunas;

    randomNumber(number);

    cout << "Somatorio = " << acc << endl;

    cout << "Rodar de novo? s- n- " << endl;
    cin >> opt;
    acc = 0;
    }while(opt != 'n');

    return 0;
}

void randomNumber(int number)
{
    for(int i = 1; i <= number; i++)
    {
        cout << setw(5) << rangeRandom(min, max);

        if(i % colunas == 0)
            cout << endl;
    }
}

inline unsigned rangeRandom(unsigned first, unsigned range)
{
    unsigned numAcc = first + rand()%range;
    somatorio(numAcc);
    return numAcc;
}

void somatorio(unsigned valor)
{
    acc += valor;
}

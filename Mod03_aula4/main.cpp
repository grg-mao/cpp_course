#include <iostream>
#include <graphics.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    initwindow(800,800);
    circle(300,300,20);
    int teste[10] = {3,4};
    //int teste2[5] = {77, 88, 99, 22, 33};
    char testec[] = "Gabriel";

    for(int i = 0; i < 8; i++)
    {
        //teste[i] = 2*i;
        cout << testec[i] << endl;
        cout << sizeof(testec);
        //cout << teste2[i] << endl;
    }

    return 0;
}

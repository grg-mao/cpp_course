#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int arr[6] = {4, 6, 2, 45, 3, 5};
    int *ptr_arr, *ptr_arr2;

    ptr_arr = &arr[0];
    ptr_arr2 = arr;

    cout << "sem *: " << ptr_arr << endl;   // endereco apontado
    cout << "com *: " << *ptr_arr << endl;  // conteudo do endereco apontado
    cout << "so arr: " << ptr_arr2 << endl;

    cout << ptr_arr << endl;
    ptr_arr += 2;
    cout << ptr_arr[1] << endl;

    for(int i = 0; i<6; i++)
        cout << &arr[i] << endl;




    return 0;
}

#include <iostream>

int main()
{

int num1, num2;

    std::cout << "Digite dois numeros para somar: ";
    std::cin >> num1 >> num2;
    std::cout << "Soma: " << (float)num1 / (float)num2 << std::endl;
    getchar();
    return 0;
}
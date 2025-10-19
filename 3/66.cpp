#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "");
    int a;
    std::cout << "Номер квартиры: ";
    std::cin >> a;
    std::cout << "1) " << ((a-1)/4)%5+1 << "\n2) " << (a-1)%4+1;
}

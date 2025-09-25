#include <iostream>
#include <cmath>
int main()
{
    float a,b,c;
    std::cout<<"Дана равнобедренная трапеция.\nМеньшее основание равно: ";
    std::cin>>a;
    std::cout<<"Большее основание равно: ";
    std::cin>>b;
    std::cout<<"Высота равна: ";
    std::cin>>c;
    std::cout<<"Периметр равен: "<<a+b+2*(sqrt(pow((b-a)/2,2)+pow(c,2)));
}

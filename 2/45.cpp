#include <iostream>
#include <cmath>
int main()
{
    double a,b,c;
    std::cout<<"Дана равнобедренная трапеция\nМеньшее основание: ";
    std::cin>>a;
    std::cout<<"Большее основание: ";
    std::cin>>b;
    std::cout<<"Угол при большем основании: ";
    std::cin>>c;
    std::cout<<"Площадь трапеции: "<<((pow(b,2)-pow(a,2))*tan(c*(M_PI/180)))/4;
}

#include <iostream>
#include <cmath>
int main()
{
    float a;
    std::cout<<"Введите радиус окружности: ";
    std::cin>>a;
    std::cout<<"Длина окружности: "<<2*3.14*a<<"\nПлощадь круга: "<<pow(a,2)*3.14<<"\n";
}

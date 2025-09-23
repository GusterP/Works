#include <iostream>
#include <cmath>
int main()
{
    float a1,b1,a2,b2;
    std::cout<<"Дана функция: x = ((2/(a^2+25))+b)/(sqrt(b)+((a+b)/2))\nКакое значение a и b выберите?\na = ";
    std::cin>>a1;
    std::cout<<"b = ";
    std::cin>>b1;
    std::cout<<"Значение функции x = "<<((2/(pow(a1,2)+25))+b1)/(sqrt(b1)+((a1+b1)/2))<<'\n';
    std::cout<<"Дана функция: y = (|a|+2sinb)/(5,5a)\nКакое значение a и b выберите?\na = ";
    std::cin>>a2;
    std::cout<<"b = ";
    std::cin>>b2;
    std::cout<<"Значение функции y = "<<(abs(a2)+2*sin(b2))/(5.5*a2);
}

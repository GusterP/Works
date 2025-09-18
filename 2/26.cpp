#include <iostream>
#include <cmath>
int main()
{
    float x,y,a,b;
    std::cout<<"a) Дана функция: z = 2x^3-3.44xy+2.3x^2-7.1y+2"<<"\nКакое значение x и y выберите?";
    std::cout<<"\nx = ",std::cin>>x,std::cout<<"y = ",std::cin>>y;
    std::cout<<"Функция z равна: "<<2*pow(x,3)-3.44*x*y+2.3*pow(x,2)-7.1*y+2<<"\n";
    std::cout<<"б) Дана функция: x = 3.14(a+b)^3+2.75b^2-12.7a-4.1"<<"\nКакое значение a и b выберите?";
    std::cout<<"\na = ",std::cin>>a,std::cout<<"b = ",std::cin>>b;
    std::cout<<"Функция x равна: "<<3.14*pow(a+b,3)+2.75*pow(b,2)-12.7*a-4.1<<"\n";
}

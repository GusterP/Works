#include <iostream>
#include <cmath>
int main()
{
    int a;
    std::cout<<"Введите ребро куба: ";
    std::cin>>a;
    std::cout<<"Объём куба равен: "<<pow(a,3)<<"\nПлощадь боковой поверности куба: "<<4*pow(a,2)<<"\n";
}

#include <iostream>
#include <cmath>
int main()
{
    float a,b;
    std::cout<<"Введите первое число: ",std::cin>>a;
    std::cout<<"Введите второе число: ",std::cin>>b;
    std::cout<<"а) Их среднее арифметическое: "<<(a+b)/2<<"\n";
    std::cout<<"б) Их среднее геометрическое: "<<sqrt(a*b)<<"\n";
}

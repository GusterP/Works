#include <iostream>
#include <cmath>
int main()
{
    float e,f,g,h;
    std::cout<<"Дана функция: a = sqrt(|e-(3/f)|^3+g)\nКакое значение e,f и g выберите?\ne = ";
    std::cin>>e;
    std::cout<<"f = ";
    std::cin>>f;
    std::cout<<"g = ";
    std::cin>>g;
    std::cout<<"Функция a = "<<sqrt(pow(abs(e-(3/f)),3)+g)<<'\n';
    std::cout<<"Дана функция: b = sine+cos^2h\nКакое значение e и h выберите?\ne = ";
    std::cin>>e;
    std::cout<<"h = ";
    std::cin>>h;
    std::cout<<"Функция b = "<<sin(e)+pow(cos(h),2)<<'\n';
    std::cout<<"Дана функция: с = (33g)/(ef-3)\nКакое значение g,e и f выберите?\ng = ";
    std::cin>>g;
    std::cout<<"e = ";
    std::cin>>e;
    std::cout<<"f = ";
    std::cin>>f;
    std::cout<<"Функция c = "<<(33*g)/(e*f-3);
}

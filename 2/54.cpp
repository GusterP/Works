#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "");
    long double a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << a << " + " << b << " = " << a + b << "\n";
    std::cout << a << " - " << b << " = " << a - b << "\n";
    std::cout << a << " * " << b << " = " << a * b << "\n";
    std::cout << a << " / " << b << " = " << a / b << "\n";
    std::cout << "(" << a << " + " << b << ")" << " / 2 = " << (a+b)/2;
}

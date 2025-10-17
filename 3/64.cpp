#include <iostream>
#include <cmath>
int main()
{
    setlocale(LC_ALL, "");
    int k, n, d;
    std::cout << "Число k (1-365): ";
    std::cin >> k;
    std::cout << "Число d (1-7): ";
    std::cin >> d;
    d = d - 1;
    std::cout << "Число n: \na) " << k - 7 * (k / 7) << "\nb) "
        << k - 7 * (k / 7) + 1 << "\nc) " << k - 7 * (k / 7) + d;
}

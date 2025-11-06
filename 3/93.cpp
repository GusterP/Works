// 3.40
#include <iostream>
#include <cmath>
int main()
{
        for (int a1,a = 100;a<1000;a++)
        {
                a1 = a/10%10*10+a/100+a%10*100;
                if (a1==654)
                {
                        std::cout<<a;
                }
        }
}
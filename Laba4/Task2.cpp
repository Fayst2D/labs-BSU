#include <iostream>

int Average(int a)
{
    return a;
}

int Average(int a, int b)
{
    return (a+b)/2;
}

int Average(int a, int b, int c)
{
    return (a+b+c)/3;
}

int Average(int a, int b, int c, int d)
{
    return (a+b+c+d)/4;
}

int main() {

    std::cout << Average(3,4,6,43) << " " << Average(3,6,43) << " " << Average(3,4);

}

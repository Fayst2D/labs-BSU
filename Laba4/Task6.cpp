#include <iostream>
#include <vector>

int Max(int a)
{
    return a;
}

template <typename T> //для double, int, char и string
T Max(T a, T b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int Max(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    }

    if(b > c && b > a)
    {
        return b;
    }
    return c;
}

template <typename T>
T Max(std::vector<T> vect) {
    T max = vect[0];

    for (int i = 1; i < vect.size() - 1; i++)
    {
        max = Max(max, vect[i]);
    }

    return max;
}

int main() {

    std::vector<int> vect = {123,4124,123,4,3,21,312};

    std::cout << Max('3', '4');
    std::cout << Max(vect);


}

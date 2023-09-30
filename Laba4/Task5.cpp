#include <iostream>

template <typename T>
T Min(T a, T b)
{
    if(a < b)
    {
        return a;
    }
    return b;
}

int main() {


    std::cout << Min(6,4);

}
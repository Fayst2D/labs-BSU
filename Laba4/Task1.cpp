#include <iostream>

// лабораторная работа 4 Бобровича Даниила

int Sign(int num)
{
    if(num > 0)
    {
        return 1;
    }

    if(num < 0)
    {
        return -1;
    }

        return 0;
}



int main() {

    int num;

    std::cin >> num;

    std::cout << Sign(num);

}

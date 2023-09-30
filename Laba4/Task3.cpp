#include <iostream>
#include <vector>

void ToByte(int& num)
{
    std::vector<char> bytes(40);

    int i = 0;
    while(num != 0)
    {
        if(num % 2 == 1)
        {
            bytes[i] = '1';
        }
        else
        {
            bytes[i] = '0';
        }

        num/=2;
        i++;
    }

    i--;
    for(;i >= 0;i--)
    {
        std::cout << bytes[i];
    }
}


int main() {

    int a;

    std::cin >> a;

    ToByte(a);


}

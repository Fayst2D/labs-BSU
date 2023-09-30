#include <iostream>

void GetRazriad(int& num)
{
    int razriad = 0;

    std::cout << num%10 << " edinic" << std::endl;

    while(num != 0)
    {
        num/=10;
        razriad++;
    }

    std::cout << razriad << " razriadov";
}

int main() {

    int a;

    std::cin >> a;

    GetRazriad(a);

}

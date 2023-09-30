#include <iostream>
#include <vector>
#include <array>

template <typename T>
int Max(T* arr, int size)
{
    size--;
    if(size > 0)
    {
        int max = Max(arr,size);
        if(arr[max] > arr[size])
        {
            return max;
        }
    }
    return size;
}


int main() {

    int n;

    std::cin >> n;

    int* arr = new int[n];

    for(int i = 0;i < n;i++)
    {
        std::cin >> arr[i];
    }

    std::cout << Max(arr, n);


}

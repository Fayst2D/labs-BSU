#include <iostream>
#include <vector>

template <typename T>
void BubbleSort(std::vector<T>& vec)
{
    for(int i = 0;i < vec.size()-1;i++)
    {
        for(int j = i+1;j < vec.size();j++)
        {
            if(vec[i] > vec[j])
            {
                T temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

int main() {

    std::vector<int> vect = {123,4124,121,4,3,21,312,1,3};
    BubbleSort(vect);

    for(int i = 0;i < vect.size();i++)
    {
        std::cout << vect[i] << " ";
    }

}
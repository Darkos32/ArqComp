#include <iostream>
using namespace std;
int count = 0;
void quicksort(int values[], int began, int end)
{
    count++;
    int i, j, pivo, aux;
    i = began;
    j = end - 1;
    pivo = values[(began + end) / 2];
    while (i <= j)
    {
        while (values[i] < pivo && i < end)
        {
            i++;
        }
        while (values[j] > pivo && j > began)
        {
            j--;
        }
        if (i <= j)
        {
            aux = values[i];
            values[i] = values[j];
            values[j] = aux;
            i++;
            j--;
        }
    }
    if (j > began)
        quicksort(values, began, j + 1);
    if (i < end)
        quicksort(values, i, end);
}

int main(int argc, char *argv[])
{
    int array[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11,10,9,8,7,6,5,4,3,2,1};
    for (int i = 0; i < 20; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    quicksort(array, 0, 20);
    for (int i = 0; i < 20; i++)
    {
        std::cout << array[i] << ' ';
    }
    cout<<"\n"<<count<<"\n";
    return 0;
}
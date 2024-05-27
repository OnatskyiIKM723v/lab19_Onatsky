#include <iostream>
using namespace std;

template <class T>
void zeroBetweenMinMax(T array[], int size)
{
    // знаходження індексів мінімального та максимального елементів
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < size; ++i)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }

    // зміна місць якщо мінімальний індекс більший за максимальний
    if (minIndex > maxIndex)
    {
        swap(minIndex, maxIndex);
    }

    // обнулення елементів між мінімальним та максимальним індексами
    for (int i = minIndex + 1; i < maxIndex; ++i)
    {
        array[i] = 0;
    }
}

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    int size = sizeof(array) / sizeof(array[0]);

    // виклик шаблонної функції для обнулення елементів
    zeroBetweenMinMax(array, size);

    // вивід результуючого масиву
    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

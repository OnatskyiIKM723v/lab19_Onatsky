#include <iostream>
using namespace std;

template <class T>
void zeroBetweenMinMax(T array[], int size)
{
    // ����������� ������� ���������� �� ������������� ��������
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

    // ���� ���� ���� ��������� ������ ������ �� ������������
    if (minIndex > maxIndex)
    {
        swap(minIndex, maxIndex);
    }

    // ��������� �������� �� ��������� �� ������������ ���������
    for (int i = minIndex + 1; i < maxIndex; ++i)
    {
        array[i] = 0;
    }
}

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    int size = sizeof(array) / sizeof(array[0]);

    // ������ �������� ������� ��� ��������� ��������
    zeroBetweenMinMax(array, size);

    // ���� ������������� ������
    for (int i = 0; i < size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

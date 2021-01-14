#include <iostream>

using namespace std;

void fillArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << " > ";
        cin >> arr[i];
    }
}

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumOfEvenElements(int* arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }

    return sum;
}

int main()
{
    int n;

    cout << "N > ";
    cin >> n;

    int* arr = new int[n];

    fillArray(arr, n);

    cout << "Array: ";
    printArray(arr, n);
    cout << "Sum of even elements: " << sumOfEvenElements(arr, n) << endl;

    return 0;
}
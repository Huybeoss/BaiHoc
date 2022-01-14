#include <iostream>
#include <random>
using namespace std;

void enter_arrays(int arr[], int n)
{
    random_device Number;
    mt19937 nNumber(Number());
    uniform_int_distribution<int> uni(1, 100);
    for (int i = 0; i < n; i++)
    {
        arr[i] = uni(nNumber);
    }
}
void out_arrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    cout << endl;
}
int main()
{
    int nSize;
    cout << "Enter the number of element in array: ";
    cin >> nSize;
    int *Arr;
    Arr = new int[nSize];
    enter_arrays(Arr, nSize);
    out_arrays(Arr, nSize);
    delete[] Arr;
    return 0;
}
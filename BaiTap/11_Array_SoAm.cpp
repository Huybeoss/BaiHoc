#include <iostream>
#include <random>
#define MAX 1000

using namespace std;

void in_arrays(int arr[], int &n)
{
    random_device random;                      // Khoi tao 1 bo so ngau nhien co ten random
    mt19937 Ketqua(random());               // Lay so ngau nhien tu bo so ngau nhien ra ngoai
    uniform_int_distribution<int> uni(1, 100); // Gioi han so ngau nhien, co cung duoc, khong co cung khong sao
    for (int i = 0; i <= n; i++)
    {
        arr[i] = uni(Ketqua) * -1;
    }
}

void out_arrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]" << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int Arr[MAX];
    int nSize;
    cout << "Enter the number of element in array: ";
    cin >> nSize;
    in_arrays(Arr, nSize);
    out_arrays(Arr, nSize);
    return 0;
}
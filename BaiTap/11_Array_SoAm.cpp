#include <iostream>
#include <random>
#define MAX 1000

using namespace std;

void Nhap_mang(int arr[], int &n)
{
    random_device random;                      // Khoi tao 1 bo so ngau nhien co ten random
    mt19937 Ketqua(random());               // Lay so ngau nhien tu bo so ngau nhien ra ngoai
    uniform_int_distribution<int> uni(1, 100); // Gioi han so ngau nhien, co cung duoc, khong co cung khong sao
    for (int i = 0; i <= n; i++)
    {
        arr[i] = uni(Ketqua) * -1;
    }
}

void Xuat_mang(int arr[], int n)
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
    cout << "Nhap vao so luong phan tu n: ";
    cin >> nSize;
    Nhap_mang(Arr, nSize);
    Xuat_mang(Arr, nSize);
    return 0;
}
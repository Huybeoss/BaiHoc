#include <iostream>
#include <random>
using namespace std;
#define MAX 10
void Sap_xep_tang(int &a, int &b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
void Nhap_mang(int arr[], int &n)
{
    random_device random;
    mt19937_64 Ket_qua(random());
    uniform_int_distribution<int> uni(1, 10);
    for (int i = 0; i < n; i++)
    {
        arr[i] = uni(Ket_qua);
    }
}
void Xuat_mang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]" << arr[i] << endl;
    }
    cout << endl;
}
void Hoan_vi(int arr[], int n) // Thuat toan hoan vi: - tao 2 vong lap
{
    for (int i = 0; i < n - 1; i++) // - so sanh mang o vi tri thu i va thu j
    {                               // - vi tri thu i se dung yen, vi tri j se di tu i + 1 -> n
        for (int j = 1; j < n; j++) // - trong qua trinh j duy chuyen neu co bat ki vi tri i nao lon hon j se lap tuc hoan vi
        {
            if (arr[i] > arr[j])
                Sap_xep_tang(arr[i], arr[j]);
        }
    }
}
int main()
{
    int Arr[MAX];
    int nSize;
    cout << "Nhap vao so luong phan tu mang: ";
    cin >> nSize;
    Nhap_mang(Arr, nSize);
    Hoan_vi(Arr, nSize);
    Xuat_mang(Arr, nSize);
}
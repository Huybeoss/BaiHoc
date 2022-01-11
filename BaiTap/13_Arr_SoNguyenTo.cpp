// Nhap vao mang so ngau nhien, va sau do in ra cac so trong mang la so nguyen to.
//! Thuat toan. 
/* 
- Nhap vao mang so ngau nhien
- Sau do su dung kieu du lieu boolean tao ham Kiem tra
- Sau do tao ham Xuat mang su dung vong lap for xuat ra cac mang tu i -> n
- Tao bien x luu gia tri cua mang tai vi tri i, sau do dung ham Kiem tra de kiem tra bien x
- Neu x = true -> x la so nguyen to, va sau do in ra man hinh. */
#include <iostream>
#include <random>
using namespace std;
#define MAX 100
void Nhap_mang(int arr[], int &n)
{
    random_device random;
    mt19937_64 Ketqua(random());
    uniform_int_distribution<int> uni(1, 100);
    for (int i = 0; i < n; i++)
    {
        arr[i] = uni(Ketqua);
    }
}
bool Kiem_Tra(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
void Xuat_mang(int arr[], int n)
{
    int x;
    cout << "Cac phan tu trong mang co gia tri la so nguyen to la:" << endl;
    for (int i = 0; i < n; i++)
    {
        x = arr[i];
        if (Kiem_Tra(x) == true)
            cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    cout << endl;
}
int main()
{
    int Arr[MAX];
    int nsize;
    cout << "Nhap vao so luong phan tu: ";
    cin >> nsize;
    Nhap_mang(Arr, nsize);
    Xuat_mang(Arr, nsize);
    return 0;
}
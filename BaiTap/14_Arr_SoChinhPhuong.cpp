// Yeu cau: Viết chương trình nhập vào mảng một chiều các số nguyên và xuất ra màn hình các phần tử là số chính phương nằm ở vị trí lẻ trong mảng
//! So chinh phuong; la so binh phuong dung cua 1 so nguyen
// Ex: 1^2 = 1, 2^2 = 4, 3^2 = 9.
//! Thuat toan
/*  - Nhap vao mang voi gia tri random
    - Tao ham check voi kieu du lieu boolean, trong ham nay su dung vong lap for cho i tu 1 -> n va kiem tra xem i^2 = n khong.
    - Sau do kiem tra n o nhung vi tri le trong mang neu tra ve gia tri true, thi in ra man hinh gia tri n  */
#include <iostream>
#include <math.h>
#include <random>
#define MAX 100
using namespace std;
void in_arrays(int arr[], int &n)
{
    random_device Number;
    mt19937 nNumber(Number());
    uniform_int_distribution<int> uni(1, 10);
    for (int i = 0; i < n; i++)
    {
        arr[i] = uni(nNumber);
    }
}
bool check(int n)
{
    for (int i = 1; i <= n; i++)
        if (n == pow(i, 2))
            return true;
        return false;
}
void out_array(int arr[], int n)
{
    int x;
    cout << "The numbers in array are 'Chinh Phuong' number: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            x = arr[i];
            if (check(x) == true)
                cout << "arr[" << i << "]: " << x << "\t";
        }
    }
    cout << endl;
}
int main()
{
    cout << "Enter the number of element in array: ";
    int Arr[MAX];
    int nSize;
    cin >> nSize;
    in_arrays(Arr, nSize);
    out_array(Arr, nSize);
    return 0;
}
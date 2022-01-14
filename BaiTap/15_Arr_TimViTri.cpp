//! Yeu cau: Tim vi tri cua gia tri co trong mang, vi tri gia tri co lan xuat hien nho nhat va lon nhat
//! Thuat toan
/* 
    - Nhap mang, Xuat mang
    - Tao ham check xem gia tri can tim co ton tai hay khong, neu ton tai return ve
    - Tao vong lap for, tham chieu den gia tri o ham check, neu no bang arr[i] thi in ra man hinh
    - Vi tri gia tri xuat hien o lan cuoi cung thi cho vong lap chay nguoc, tu n -1 ve 0
     */
#include <iostream>
#include <random>
using namespace std;
#define MAX 100
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
void out_arrays(int arr[], int n)
{
    cout << "The elements in array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << "\t";
    }
    cout << endl;
}
int check_value_true(int arr[], int n) // Ham check xem gia tri tim co ton tai trong mang hay khong.
{
    int x;
    int y;
    do
    {
        cout << "Enter the value need to find: ";
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                y = arr[i];
                break;
            }
        }
        if (x != y)
        {
            cout << "The value not exist, please again" << endl;
        }
    } while (x != y);
    return y;
}
void show_value_atPosition(int arr[], int n, int nValue)
{
    cout << "The value in position need to find is: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == nValue)
            cout << i << "\t";
    }
    cout << endl;
}
void find_position_element_smallest(int arr[], int n, int nValue) // Tim so x o vi tri nho nhat
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == nValue)
        {
            cout << "Value at posiiton smallest: " << i << "\t" << endl;
            break;
        }
    }
}
void find_position_element_biggest(int arr[], int n, int nValue)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == nValue)
        {
            cout << "Value at position biggest: " << i << endl;
            break;
        }
    }
}
int main()
{
    int Arr[MAX];
    int nSize;
    cout << "Enter the number of element in array: ";
    cin >> nSize;
    in_arrays(Arr, nSize);
    out_arrays(Arr, nSize);
    int nValue(check_value_true(Arr, nSize));
    show_value_atPosition(Arr, nSize, nValue);
    find_position_element_smallest(Arr, nSize, nValue);
    find_position_element_biggest(Arr, nSize, nValue);
    return 0;
}
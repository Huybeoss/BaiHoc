//? Day Fibonaci la day so vo han, bat dau tu 0 & 1 or 1 & 1. Cac so sau se bang tong 2 so lien truoc.
//! Yeu cau: Nhap vao so n, xuat ra man hinh day so fibo trong khoang 1 den n.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap vao gia tri n: ";
    cin >> n;
    int Gia_tri;
    int a(0);
    int b(1);
    cout << "Gia tri la: ";
    do
    {
        cout << a << "\t";
        Gia_tri = a + b;
        a = b;
        b = Gia_tri;
    } while (Gia_tri <= n);
    cout << endl;
}
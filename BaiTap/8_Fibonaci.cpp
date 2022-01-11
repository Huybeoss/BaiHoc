//? Day Fibonaci la day so vo han, bat dau tu 0 & 1 or 1 & 1. Cac so sau se bang tong 2 so lien truoc.
//! Yeu cau: Nhap vao so n, xuat ra man hinh day so fibo trong khoang 1 den n.
#if 0
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
#endif
//! Yeu cau: Nhap so n, xuat ra so fibo thu n
// Ex: 0 1 1 2 3 5, so fibo thu n = 4 -> 2

#include <iostream>
using namespace std;

int Kiem_tra()
{
    int n;
    do
    {
        cout << "Nhap vao gia tri n: ";
        cin >> n;
        if(n < 0)
        {
            system("clear");
            cout << "Gia tri sai, vui long nhap lai!" << endl;
        }
    } while (n < 0);
    return n;
}
int main()
{
    int n;
    n = Kiem_tra();
    int a(1);
    int b(0);
    int Temp(0);
    for (int i = 1 ; i <= n; i++)
    {
        Temp = a + b;
        a = b;
        b = Temp;
    }
   cout << "Gia tri so fibo o vi tri " << n << " la: " << a << endl;
    return 0;
}
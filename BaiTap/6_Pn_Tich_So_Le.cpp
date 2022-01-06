// Tinh P(n) = 1.2.3...(2n+1);
//! Ex: P(2) = 1.3.5, because (2.2+1) = 5, goi la tinh tich cac so le
//! Thuat Toan:
/* 
    - Nhap vao so nguyen duong n
    - Kiem tra xem co thoa dieu kien
    - for loop neu n % 2 != 0 -> so le
    - Tao bien sum de luu lai cai so le va nhan no lai voi nhau */
#include <iostream>
using namespace std;
int Kiem_Tra()
{
    long n;
    do
    {
        cout << "Nhap vao gia tri n: ";
        cin >> n;
        if (n < 0)
        {
            system("clear");
            cout << "Nhap sai, yeu cau nhap lai!" << endl;
        }
    } while (n < 0); // Lap neu dieu kien dung
    return n;
}
long Tinh_Toan(long &n)
{
    long sum(1);
    for (int i = 1; i <= 2 * n + 1; i++)
    {
        if (i % 2 != 0)
            sum *= i;
    }
    return sum;
}
int main()
{
    long n;
    n = Kiem_Tra();
    long Ket_Qua = Tinh_Toan(n);
    cout << "Ket qua la: " << Ket_Qua << endl;
    return 0;
}

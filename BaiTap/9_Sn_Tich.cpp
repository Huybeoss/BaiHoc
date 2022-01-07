// Tinh tich cac so tu 1 -> n
// Ex: S(n) = 1 + 1.2 +1.2.3 + 1.2.3...n
/* 
! Thuat Toan:
    - Kiem tra neu n < 0 yeu cau nhap lai
    - for loop tu i -> n
    - Tao bien Tich luu tru gia tri 1.n sau moi lan lap
    - Tao bien Tong luu tru gia tri 1+1.n sau moi lan lap */
#include <iostream>
using namespace std;

int Kiem_tra()
{
    int n;
    do
    {
        cout << "Nhap vao gia tri n: ";
        cin >> n;
        if (n < 0)
        {
            system("clear");
            cout << "Gia tri sai, vui long nhap lai!" << endl;
        }
    } while (n < 0);
    return n;
}
int Tinh_toan(int &n)
{
    int Tich(1);
    int Tong(0);
    for (int i = 1; i <= n; i++)
    {
       Tich *= i;
       Tong += Tich; 
    }
   return Tong; 
}
int main()
{
    int n;
    n = Kiem_tra();
    int Ket_qua = Tinh_toan(n);
    cout << "Ket qua la: " << Ket_qua << endl;
    return 0;
}
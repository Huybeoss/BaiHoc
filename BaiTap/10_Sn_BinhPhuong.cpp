// Ex: S(n) = 1 + 2^2 + 3^3 + n^n


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap vao gia tri n: ";
    cin >> n;
    int Tong(0);
    int BinhPhuong;
    for (int i = 1; i <= n; i++)
    { 
        BinhPhuong = pow(i,i);
        Tong += BinhPhuong;
    }
   cout << "Gia tri la: " << Tong << endl; 
}
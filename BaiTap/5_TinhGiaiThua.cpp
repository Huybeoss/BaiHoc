// Giai thua:
//! Ex: 4! = 1.2.3.4 -> n! = 1.2.3.4.....n
/* 
! Thuat Toan:
    - Nhap vao so nguyen duong n
    - for loop i = 1 -> i < n-1
    - Tao bien Sum, sau moi vong lap sum = sum*i
    - return sum: sum la ket qua
     */
#include <iostream>
using namespace std;
int Tinh_Toan(int &n)
{
    int sum(1);
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    cout << "Nhap vao gia tri n:";
    int n;
    cin >> n;
    int Ket_Qua = Tinh_Toan(n);
    cout << n << "!" << "= "<< Ket_Qua << endl;
    return 0;
}
// So hoan thien (so hoan hao) la cac so ma co tong cac uoc bang chinh no
// Ex: 6 = 1 + 2 + 3, 6 la so hoan thien
/*
! Thuat Toan:
    - Cho so nguyen duong n
    - Su dung for loop i tu 1 -> n-1
    - Khoi tao ham tong sum, neu n chia het chi i, thi sum = sum + i
    - loop den khi i < n-1
    - Kiem tra neu sum = n -> la so hoan hao */
#include <iostream>
using namespace std;

int Tinh_Toan(int &n)
{
    int sum(0);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}
bool Kiem_Tra(int &n)
{
    if (Tinh_Toan(n) == n)
        return true;
    return false;
}

int main()
{
    cout << "Nhap vao gia tri n: ";
    int n;
    cin >> n;
    if (Kiem_Tra(n) == true)
        cout << n << " La so hoan thien!" << endl;
    else
    {
        cout << n << " Khong la so hoan thien!" << endl;
    }
    return 0;
}
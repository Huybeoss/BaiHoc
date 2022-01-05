// Thuat toan su dung phep tru de tim ra UCLN
// Sau khi tim ra UCLN su dung no de tim ra BCNN
#include <iostream>
using namespace std;
int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
        {
            b = b - a;
        }
    }
    return a;
}
int BCNN(int a, int b, int c)
{
    return (a*b)/c;
}
int main()
{
    int a, b;
    cout << "Nhap vao gia tri a: ";
    cin >> a;
    cout << "Nhap vao gia tri b: ";
    cin >> b;
    int UC = UCLN(a, b);
    cout << "UCLN la: " << UC << endl;
    int BC = BCNN(a,b,UC);
    cout << "BCNN la: " << BC << endl;
    return 0;
}
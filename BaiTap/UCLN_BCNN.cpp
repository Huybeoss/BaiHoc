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
int main()
{
    int a, b;
    cout << "Nhap vao gia tri a: ";
    cin >> a;
    cout << "Nhap vao gia tri b: ";
    cin >> b;
    int UC = UCLN(a, b);
    cout << "UCLN la: " << UC << endl;
    return 0;
}
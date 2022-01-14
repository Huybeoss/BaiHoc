/* Kiem tra so nguyen to:
    So nguyen to la so chi co 2 uoc la 1 & chinh no. Va lon hon 1
    Số tự nhiên a chia hết cho số tự nhiên b thì ta nói a là bội của b, còn b là ước của a. */
#if 0
#include <iostream>
using namespace std;

void check()
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    if (n > 1)
    {
        if (n == 2)
        {
            cout << n << " La so nguyen to" << endl;
        }
        else
        {
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    cout << n << " Khong la so nguyen to" << endl;
                    break;
                }
                else
                {
                    cout << n << " La so nguyen to" << endl;
                }
            }
        }
    }
    else
    {
        cout << n << " La so nguyen to" << endl;
    }
}
int main()
{
    check();
    return 0;
}
#endif // Sai

#include <iostream>
using namespace std;

bool Kiem_Tra(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void nSo_Nguyen(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if ( Kiem_Tra(i) == true )
        cout << i << "\t";
    }
    cout << endl;
}

int main()
{
    cout << "Nhap Vao So Nguyen a: ";
    int a;
    cin >> a;
    cout << "Nhap Vao So Nguyen b: ";
    int b;
    cin >> b;
    cout << "Cac So La So Nguyen To La: ";
    nSo_Nguyen(a,b);
   /*  if (Kiem_Tra(n) == true)
        cout << n << " La so nguyen to" << endl;
    else
    {
        cout << n << " Khong la so nguyen to" << endl;
    }
    return 0; */
}
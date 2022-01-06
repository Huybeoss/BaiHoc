#include <iostream>

using namespace std;

int count(int &n)
{
    int count(0);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    return count;
}

int main()
{
    cout << "Enter The Number: ";
    int n;
    cin >> n;
    int counts = count(n);
    cout << "So Uoc la: " << counts << endl;
    return 0;
}
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t Time = time(NULL);
    tm *now = localtime(&Time);
    int nYear;
    nYear = now -> tm_year + 1900;
    cout << "Thoi Gian Hien Tai La: " << nYear << endl;
    return 0;
}
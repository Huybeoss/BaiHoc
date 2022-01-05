#if 0
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<time.h>

using namespace std;

void TinhTuoi(int &nNamSinh, int nYear=0)

{
	time_t Time = time(NULL);
	tm *Now = localtime(&Time);//Con tro lay dia chi thoi gian cua he thong

	nYear = Now->tm_year+1900;//Lay thoi gian hien tai cua he thong

	//cout << nYear;

	cout << "Tuoi cua ban la: " << nYear - nNamSinh << endl;
}

int main()
{
	int nNamsinh;
	cout << "Nhap vao nam sinh: ";
	cin >> nNamsinh;
	TinhTuoi(nNamsinh);
}
#endif//Tinh tuoi nguoi dung

#if 0
#include<iostream>
#include"MyTaxi.h"
#include<iomanip>

using namespace std;
using namespace MyNamespace;

void Calculate_Taxi(int nKm)
{
	double dTotal;
	if (nKm <= lv1)
	{
		dTotal = nKm * price1;
		cout << "Prices Taxi Of You Is: " << dTotal << endl;
	}
	else
	{
		if (nKm <= lv2)
		{
			dTotal = (nKm - lv1) * price2 + (lv1 * price1);
			cout << "Prices Taxi Of You Is: " << dTotal << endl;
		}
		else
		{
			dTotal = (nKm - (lv1 + lv2))*price3 + (lv1 * price1) + (lv2 * price2);

			if (nKm > lv3)
			{
				cout << "Prices Taxi Of You Is: " << setprecision(9) << dTotal - (dTotal * percent_pro) << endl;
			}
			else
			{
				cout << "Prices Taxi Of You Is: " << setprecision(9)<< dTotal  << endl;//set... hiển thị trên màn hình đến 9 sô
			}

		}
	}
}

int main()
{
	int nKm;
	int a = 32;
	//cout << "Enter the number of Kilometer: ";
	//cin >> nKm;
	do
	{
		system("cls");

		//cout << "\t\tEnter The Keyboar 'ENTER' To Continue\n";
		//cout << "\t\tEnter The Keyboar ESC To Close\n";
		cout << "Enter the number of Kilometer: ";
		cin >> nKm;
		Calculate_Taxi(nKm);
		cout << "\t\tEnter The Keyboar 'SPACE' To Continue\n";
		cout << "\t\tEnter The Keyboar '2' To Close\n";
		system("pause");

	} while (a == getchar());

	return 0;
}

#endif//Calculate Taxi

#if 0
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include<string>

using namespace std;
int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"Tiếng Việt có dấu" << endl;
	wchar_t test[256] = { 0 };

	wcout << L"Hãy nhập vào một chuỗi ký tự:" << std::endl;

	wcin >> test;

	wcout << L"Chuỗi ký tự mà bạn vừa mới nhập:" << std::endl;

	wcout << test;
	return 0;
}
#endif//Tieng viet co dau

/*#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main() {
	char key;
	while (true) {
		printf("I love nguyenvanhieu.vn\n");
		printf("Sleep...\n");
		Sleep(500);
		if (_kbhit()) {
			key = getchar();
			if (key == 27) {
				break;
			}
		}
	}
}*/

/*#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	char a;
	a = getchar(); // ham getchar chi nhan mot va chi mot ki tu tu keyboard
					// ki tu nay duoc luu vao a
	if (a == '\n') cout << "OK" << endl;
	else cout << "Error !" << endl;
	return 0;
}*/


#if 0

#include<iostream>
using namespace std;

int DivideRemainder(int &n)
{
	int Sum(0);
	int Remainder;
	for (; n != 0; n/=10)
	{
		Remainder = n % 10;
		
		Sum += Remainder;

	}
	return Sum;
}

int main()
{
	int n;
	cout << "Input Interger: ";
	cin >> n;
	cout << "Total of Intergers: " << DivideRemainder(n) << endl;

	return 0;
}
#endif// tinh tonng cac so nguyen

#if 0

#include<iostream>
using namespace std;


int SoDao(int &n)
{
	int Remainder;
	int Sum(0);
	for (; n != 0; n/=10)
	{
		Remainder = n % 10;

		Sum = (Sum * 10) + Remainder;
	}
	return Sum;
}

void Compare(int dk1, int dk2)
{
	if (dk1 == dk2)
		cout << "Yes!!" << endl;
	else
	{
		cout << "No!!" << endl;
	}
}

int main()
{
	int n;
	cout << "Enter Interges: ";
	cin >> n;
	
	cout << "Result: ";
	Compare(SoDao(n), n);

	return 0;
}

#endif// SO DOI

#if 0

#include<iostream>
using namespace std;

void Counts(int &n)
{
	int Count(0);
	int Sum;
	for (; n != 0; n/=10)
	{
		Sum = n / 10;
		++Count;
	}
	cout << "So chu so la: " << Count << endl;
}

int main()
{
	int n;
	cout << "Input Interger: ";
	cin >> n;
	//cout << "Total of Intergers: " << DivideRemainder(n) << endl;

	Counts(n);
	return 0;
}

#endif//Dem chu so

#if 0

#include<iostream>
using namespace std;

int GiaiThua(int &n )
{
	int nGiaiThua(1);
	for (int i = n;  i >= 1 ;i--)
	{
		nGiaiThua *= i;
	}
	return nGiaiThua;
}

int main()
{
	int n;
	cout << "Nhap vao so nguyen: ";
	cin >> n;

	cout << n << "!= " << GiaiThua(n) << endl;

	return 0;
}

#endif//Tinh giai thua

#if 0

#include<iostream>

using namespace std;

int Counts(int nSoNguyen)
{
	int c(0);
	for (;  nSoNguyen != 0; nSoNguyen/=10)
	{
		++c;
	}
	return c;
}

int Total(int nSoNguyen, int count)
{
	int Sum(0);
	int Rem;
	for (;nSoNguyen != 0 ;nSoNguyen/=10)
	{
		Rem = nSoNguyen % 10;
		Sum += pow(Rem, count);

	}
	return Sum;
}

int main()
{
	int nSoNguyen;
	cout << "Enter The Number: ";
	cin >> nSoNguyen;
	int Count = Counts(nSoNguyen);
	int t = Total(nSoNguyen, Count);
	if (t == nSoNguyen)
		cout << "La So Tu Man. \n";
	else
	{
		cout << "Khong La So Tu Man.\n";
	}
}

#endif//Kiem Tra So Tu Man.

#if 0
#include<iostream>

using namespace std;

//Nam nhuan la nam chia het cho 4 nhung khong chia het cho 100

void Year(int &star, int &end)
{
	for  ( int i = star; i <= end ; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			cout  << i << "\t\t";
		}
		
	}

}
int main()
{
	int nYearStar;
	int nYearEnd;
	cout << "Enter The Year Start: ";
	cin >> nYearStar;
	cout << "Enter The Year End: ";
	cin >> nYearEnd;
	cout << "\t\t\tNam Nhuan: \n";
	Year(nYearStar, nYearEnd);
}

#endif// Kiem tra nam nhuan

#if 0

#include<iostream>
using namespace std;

bool KiemTraNamNhuan(int &Year)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
	{
		return true;
	}
	return false;
}


int NgayToiDa(int &Month, int &Year)
{
	int nDay;

	switch (Month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nDay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nDay = 30;
		break;
	case 2:
		if (KiemTraNamNhuan(Year) == true)
		{
			nDay = 29;
		}
		else
		{
			nDay = 28;
		}
		break;
	}
	return nDay;
}

bool CheckDay(int &Day, int &Month, int &Year)
{
	if (Month < 0 || Month > 12)
	{
		return false;
	}
	if (Day < 0 || Day > NgayToiDa(Month,Year))
	{
		return false;
	}
	if (Year < 0)
	{
		return false;
	}
	return true;
}
void Xuat(int &Day, int &Month, int &Year)
{
	if (CheckDay(Day, Month, Year) == true)
	{
		cout << "True\n";
	}
	else
	{
		cout << "False\n";
	}
}

int main()
{
	int nDay, nMonth, nYear;
	cout << "Enter The Day: ";
	cin >> nDay;
	cout << "Enter The Month: ";
	cin >> nMonth;
	cout << "Enter The Year: ";
	cin >> nYear;
	Xuat(nDay, nMonth, nYear);
}

#endif//Tim Ngay Hop Le


#if 0

#include<iostream>

using namespace std;

bool KiemTraNamNhuan(int &Year)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int DayOfMonth(int &Month, int &Year)
{
	int nDay;
	switch (Month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nDay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nDay = 30;
		break;
	case 2:
		if (KiemTraNamNhuan(Year) == true)
		{
			nDay = 29;
		}
		else
		{
			nDay = 28;
		}
	}
	return nDay;
}

void SeachDay_1(int Day, int Month, int Year)
{
	if (Day == 1 && Month == 1)
	{
		Month = 12;
		Day = DayOfMonth(Month, Year);
		Year -= 1;
		cout << "Ngay Truoc La: " << Day << '/' << Month << '/' << Year << endl;
	}
	else
	{
		if (Day == 1)
		{
			Month -= 1;
			Day = DayOfMonth(Month, Year);
			cout << "Ngay Truoc La: " << Day << '/' << Month << '/' << Year << endl;
		}
		else
		{
			Day -= 1;
			cout << "Ngay Truoc La: " << Day << '/' << Month << '/' << Year << endl;
		}
	}
	
}

bool CheckDay(int &Day, int &Month, int &Year)
{
	if (Month < 0 || Month > 12)
	{
		return false;
	}
	if (Day < 0 || Day > DayOfMonth(Month, Year))
	{
		return false;
	}
	if (Year < 0)
	{
		return false;
	}
	return true;
}

int main()
{
	int nDay, nMonth, nYear;
	cout << "Enter The Day: ";
	cin >> nDay;
	cout << "Enter The Month: ";
	cin >> nMonth;
	cout << "Enter The Year: ";
	cin >> nYear;
	if (CheckDay(nDay, nMonth, nYear) == true)
	{
		SeachDay_1(nDay, nMonth, nYear);
	}
	else
	{
		cout << "Ngay Nhap False!!\n";
	}
}

#endif//tim ngay hom truoc


#if 1

#include<iostream>

using namespace std;

int NgayToiDa(const int Month,const int Year)
{
	int nDay;
	switch (Month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nDay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nDay = 30;
		break;
	case 2:
		if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
		{
			nDay = 29;
		}
		else
		{
			nDay = 28;
		}
		break;
	}
	return nDay;
}

bool CheckDay( int Day, int Month, int Year)
{
	if (Day< 0 || Day > NgayToiDa(Month, Year))
	{
		return false;
	}
	if (Month < 0 || Month>12)
	{
		return false;
	}	
	if (Year<0)
	{
		return false;
	}
	return true;
}

int DayOfYear(int &Day, int &Month, int &Year)
{
	int TotalDay = Day;
	if (CheckDay(Day, Month, Year) == true)
	{
		for (Month--; Month >= 1; Month--)
		{
			TotalDay += NgayToiDa(Month, Year);
		}
		cout << "Ngay hien tai la ngay: " << TotalDay << " cua nam.\n";
	}
	return TotalDay;
}

int CheckNamNhuan(int Month, int Year)
{
	int total;
	if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
	{
		total = 366;
		return total;
	}
	else
	{
		return total = 365;
	}
}
int main()
{
	int nDay, nMonth, nYear;
	cout << "Enter The Day: ";
	cin >> nDay;
	cout << "Enter The Month: ";
	cin >> nMonth;
	cout << "Enter The Year: ";
	cin >> nYear;

	int idx = DayOfYear(nDay, nMonth, nYear);

	int idy = CheckNamNhuan(nMonth, nYear) - (idx -1);

	cout << "Con: " << idy << " Ngay Nua Den Tet!!\n";

}

#endif//Tim ra ngay thu may trong nam

#if 0

#include<iostream>
#include<string>
using namespace std;


class class_
{
public:
	class_(const string &name,const int &old,const string &addr);


private:
};


int main()
{
	class_ *class_71 = new class_("Huy", 22, "Ben tre");

	return 0;
}

#endif// Lop class
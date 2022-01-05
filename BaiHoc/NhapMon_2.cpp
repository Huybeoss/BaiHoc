#if 0
#include <iostream>
#include <iomanip>
using namespace std;
void cout1()
{
	cout << "Nhap vao nam sinh cua ban: ";
}
void cin1()
{
	int year;
	cin >> year;
	int age = 2021 - year;
	cout << "Tuoi cua ban la: " << age << endl;
}
int main()
{
	cout1();
	cin1();
	cout1();
	cin1();
	cout1();
	cin1();
	return 0;
}
#endif//Hàm(Functions): là các câu lệnh có thể sử dụng lại
#if 0
#include<iostream>	
using namespace std;
void hi()
{
	cout << "Xin chao, moi nhap gia tri can tinh!" << endl;
}
void value()//Tham số()
{
	double a;
	cout << "Nhap vao gia tri cua a: ";
	cin >> a;
	int b;
	cout << "Nhap vao gia tri cua b: ";
	cin >> b;
	cout <<"Gia tri can tinh la: "<< a/b << endl;
}
int main()
{
	hi();
	value();//Đối số ()
	return 0;
}
#endif // Tham số (parameters) và đối số(argument) của hàm
#if 0
#include <iostream>
#include <iomanip>
using namespace std;
void add(int &y)//Cú pháp tham chiếu bằng biến
{
	cout <<"y = "<< y << endl;
	y = 70;
	cout << "y = " <<y << endl;
}
int main()
{
	int x(1);
	cout <<"x= " <<x << endl;
	add(x);
	cout << "x= " << x << endl;
	return 0;
}
#endif//Tham chiếu cho hàm bằng biến
#if 0
#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

	const int SUNDAY = 1;
	const int MONDAY = 2;
	const int TUESDAY = 3;
	const int WEDNESDAY = 4;
	const int THURSDAY = 5;
	const int FRIDAY = 6;
	const int SATURDAY = 7;

int main()
{
	int x = TUESDAY;
	switch (x)
	{
	case SUNDAY:
		cout << "Sunday" << endl;
		break;
	case MONDAY:
		cout << "Monday" << endl;
		break;
	case TUESDAY:
		cout << "Tuesday" << endl;
		break;
	case WEDNESDAY:
		cout << "Wednesday" << endl;
		break;
	case THURSDAY:
		cout << "Thursday" << endl;
		break;
	case FRIDAY:
		cout << "Friday" << endl;
		break;
	case SATURDAY:
		cout << "Saturday" << endl;
		break;
	default:
		cout << "Unknown" << endl;
		break;
	}

}
#endif//CÂU ĐIỀU KIỆN Swich
#if 0
#include <iostream>
using namespace std;
int main()
{
	int x(1);
	while (x<=5)
	{
		cout << x << " ";
		++x;
	}
	return 0;
}
#endif//Vòng lặp while
#if 0
#include<iostream>
using namespace std;
int main()
{
	int x(1);
	while (x <= 15)
	{
		int y(1);
		while (y <= x)
		{
			cout << y << " ";
			++y;
		}
	cout << endl;
	++x;
	}
return 0;
}
#endif // Vòng lập while tam giác số
#if 0
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char selection;

	do
	{
		system("cls");// clear screen

		cout << "Please make a selection: \n";
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Division\n";
		cout << "Enter your selection: ";
		cin >> selection;

		if (cin.fail())
		{
			// user didn't input a number
			cin.clear(); // reset failbit
			cin.ignore(32767, '\n'); //skip bad input
		}
	} while (selection <1 || selection >4 );

	// do something with selection here
	// such as a switch statement

	cout << "You selected option #" << selection << "\n";

	return 0;
}
#endif// Vòng lặp do while
#if 0
#include <iostream>  
using namespace std;

int main()
{
	for (int i = 10; i > 0; i--) {
		cout << i << ' ';
	}
	// Output: 10 9 8 7 6 5 4 3 2 1  

	for (int i = 10; i < 20; i = i + 2) {
		cout << i << ' ';
	}
	// Output: 10 12 14 16 18  

	return 0;
}
#endif// Vòng lặp for
#if 0
#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10; ++i)
	{
		// if the number is divisible by 4, skip this iteration
		if ((i % 2) == 1)
			continue; // jump to end of loop body

		// If the number is not divisible by 4, keep going
		cout << i << endl;

		// The continue statement jumps to here
	}

	return 0;
}
#endif // Từ khoá continue thường sử dụg cho for
#if 0
#include <iostream>
#include<random>
using namespace std;
int main()
{
	random_device rd;
	mt19937 random(rd());
	//uniform_int_distribution<int> uni(1, 10);//Giới hạn số ngẫu nhiên
	int n = random();//int n = uni(random)
	cout << n << endl;
	return 0;

}
#endif//Số ngẩu nhiên
#if 0

#include <iostream>
#define MAX 4//Gioi han so phan tu trong mang
using namespace std;
int main()
{
	int arr[MAX] {};
	for (int i = 0; i < MAX; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> arr[i];//Vong lap nhap vao gia tri 
	}
	for ( int i = 0; i < MAX; i++)
	{
		cout << arr[i]<<"\t";
	}
	/*arr[3] = 1000;//Gan so vao mang
	cout << arr[3];*/
	return 0;
}
#endif//Arrays
#if 0
#include <iostream>
#include <random>
using namespace std;
#define MAX 1000

void In_arr(int arr[], int &n)
{
	cout << "Nhap so luong phan tu n: ";
	cin >> n;
	random_device rd;
	mt19937 random(rd());
	uniform_int_distribution <int> uni(1, 1000);
	for (int i = 0; i < n; i++)
	{
		arr[i] = uni (random) ;
		}
}
void Out_arr(int arr[], int &n)
{
	for ( int i = 0; i < n;i++)
	{
		cout << "Arrays[" << i << "]= " << arr[i] << endl;
	}
}
void coppy(int Source[], int Destination[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		Destination[i] = Source[i];
	}
}
int timkim(int arr[], int &n, int &x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x) {
			return i;
		}

	}
	return -1;
}
void hoanvi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int sapxeptang(int arr[], int n)
{
	for ( int i = 0; i < n - 1;  i++)
	{
		for ( int j = i + 1; j < n;  j++)
		{
			if (arr[i] > arr[j])
				hoanvi(arr[i], arr[j]);

		}
	}
	return 0;
}
void themgiatri(int arr[], int &n, int idx, int x)
{
	if (idx >= 0 && idx < n) 
	{
		/*{
			for (int i = idx; i < n; i++)
				arr[i] = arr[i + 1];
			n--;
		}*///Xoa phan tu trong mang tai vi tri idx: idx=2 (a2=a3, a3=a4, a4=a5, n--)
		n++;
		for (int i = n ; i > idx; i--)
		{
			arr[i] = arr[i-1];

		}
		arr[idx] = x;

		/*“Đẩy” các phần tử bắt đầu tại vị trí idx sang phải 1 vị trí.
Đưa x vào vị trí idx trong mảng.
Tăng n lên 1 đơn vị.*/// Thêm phần tử vào mảng tại vị trí idx=2 (a5=a4, a4=a3,a3=a2 lúc này n++ thêm vào phan tu a2)
	}
}

int main()
{
	int Myarr1[MAX];
	int Myarr2[MAX];
	int nSize;
	In_arr(Myarr1,nSize);
	cout << "My Arrays 1: " << endl;
	Out_arr(Myarr1, nSize);
	//coppy(Myarr1, Myarr2, nSize);
	//cout << "My Arrays 2: " << endl;
	//Out_arr(Myarr2, nSize);
	//sapxeptang(Myarr2, nSize);
	//cout << "Sau khi sap xep: " << endl;
	//Out_arr(Myarr2, nSize);
	/*int x;
	cout << "Nhap phan tu can tim: ";
	cin >> x;
	int num = timkim(Myarr2, nSize, x);
	if (num != -1)
		cout << "Gia tri can tim o vi tri: " << num << endl;
	else
		cout << "Khong tim thay!!";*/
	int vitri;
	int giatri;
	cout << "Nhap vao vi tri can them: ";
		cin >> vitri;
		cout << "Nhap vao gia tri can them: ";
		cin >> giatri;
		themgiatri(Myarr1, nSize, vitri, giatri);
		cout << "Sau khi them gia tri: "<<endl;
		Out_arr(Myarr1, nSize);
	
}
#endif//Thao tac tren mang 1 chieu
#if 0

#include<iostream>
#include<random>
using namespace std;
#define ROW 100
#define COL 100
void NhapMang(int arr[][COL], int &c, int &l);
void Xuatmang(int arr[][COL], int c, int l);
int TongDong(int arr[][COL], int m, int l);
void TongCot(int arr[][COL], int m, int r);
void TimMax(int arr[][COL], int r, int c);

int main()
{
	int Myarr[ROW][COL];
	int row, col;
	cout << "Nhap vao so dong cua mang: ";
	cin >> row;
	cout << "Nhap vao so cot cua mang: ";
	cin >> col;
	NhapMang(Myarr, row, col);
	cout << "Myarrays:" << endl;
	Xuatmang(Myarr, row, col);
	cout << "Nhap vao dong can tinh: ";
	int m;
	cin >> m;
	int Giatri=TongDong(Myarr, m, col);
	cout << "Gia tri tong cua dong "<<m<<": " << Giatri << endl;
	int n;
	cout << "Nhap vao cot can tinh: ";
	cin >> n;
	TongCot(Myarr, n, row);
	TimMax(Myarr, row, col);

	return 0;

}
void NhapMang(int arr[][COL], int &c, int &l)
{

	random_device rd;
	mt19937 random(rd());
	uniform_int_distribution<int> uni(1, 100);
	/*cout << "Nhap vao so dong cua mang: ";
	cin >> c;
	cout << "Nhap vao so cot cua mang: ";
	cin >> l;*/

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j] = uni(random);
		}
	}
}
void Xuatmang(int arr[][COL], int c, int l)
{
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << arr[i][j]<< "\t";
		}
		cout << endl;
	}
}
int TongDong(int arr[][COL], int m, int l)
{
	int sum(0);
	for (int j = 0; j < l; j++) // Duyệt các cột
		sum += arr[m][j];

	//cout << "Gia tri tong la: " << sum << endl;
	return sum;
}
void TongCot(int arr[][COL], int m, int r)
{
	int sum(0);
	for (int i = 0; i < r; i++)//Vong lap chi chay qua cac dong
	{
		sum += arr[i][m];
	}
	cout << "Gia tri tong cua cot " << m << ": " << sum << endl;
}
void TimMax(int arr[][COL], int r, int c)//Giả sử giá trị max hiện tại là giá trị phần tử đầu tiên mt[0][0]
{
	int Max = arr[0][0];				//Lần lượt kiểm tra các phần tử còn lại để cập nhật max.
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] > Max)
				Max = arr[i][j];
		}
	}
	cout << "Gia tri lon nhat trong mang la: " << Max << endl;
}


#endif // Cac thao tac tren mang 2 chieu

#if 0
#include <iostream>
#include <cstring>
using namespace std;
#define Max 1000
int main()
{
	char sz[Max];
	cout << "Nhap vao ho va ten: ";
	cin.getline(sz, Max);

	cout <<"Ho va ten: "<< sz << endl;
}
#endif// Mang ki tu

#if 0

#include<iostream>
using namespace std;
int main()
{
	auto Kieu1('K');
	cout << "Type of Kieu1: " << typeid(Kieu1).name() << endl;
	auto Kieu2(1.15);
	cout << "Type of Kieu2: " << typeid(Kieu2).name() << endl;
	auto Kieu3(1.0F);
	cout << "Type of Kieu3: " << typeid(Kieu3).name() << endl;
	auto Kieu4(1);
	cout << "Type of Kieu4: " << typeid(Kieu4).name() << endl;
}
#endif//Ki tu Auto

#if 0


#include <iostream>
#define MAX 4
using namespace std;
int main()
{
	int arr[MAX]{ 10,20,30,40 };
	for (auto &Arr : arr)//Chuyển từng phần tử từ arr sang Arr và out ra
		cout << Arr << " ";

}
#endif//Vòng lặp for each

#if 0
#include<iostream>
#include<array>
using namespace std;
#define MAX 5
void PrintArr(const array<int, MAX> arr);
int main()
{
	array <int, MAX>arr{ 3,5,6,2,1 };
	PrintArr(arr);
	cout << "Sap xep mang tang: \n";
	sort(arr.begin(), arr.end());
	PrintArr(arr);
	cout << "Sap xep mang giam: \n";
	sort(arr.rbegin(), arr.rend());
	PrintArr(arr);
}
void PrintArr(const array<int, MAX> arr)
{
	cout << "So phan tu: " << arr.size() << endl;

	for (const auto arr1 : arr)
		cout << arr1 << " ";

	cout << endl;

}
#endif//Cac thao tac tren lop Arrays dung san

#if 0
#include<iostream>	
using namespace std;

int main()
{
	int values(5);
	int *ptr = &values;//Con trỏ lưu địa chỉ của biến values trên thanh ram

	cout << values << endl;
	*ptr = 100;//Thay đổi giá trị tại địa chỉ mà con trỏ đã lưu
	cout << ptr << endl;
}
#endif//Con trỏ (pointer)

#if 0
#include<iostream>
using namespace std;

int main()
{
	int *ptr = (nullptr);//Con trỏ chưa có địa chỉ khi khởi tạo
		if (ptr)
			cout << "Con tro den dia chi\n";
		else
			cout << "Con tro null\n";
}

#endif//Con trỏ Null

#if 0
#include <iostream>	
#include <random>
using namespace std;

void NhapMang(int arr[])
{
	random_device rd;
	mt19937 random(rd());
	uniform_int_distribution <int> uni(1, 1000);
	for (int i = 0; i < 10; i++)
		{
		arr[i] = uni(random);
		}
}

void XuatMang(int arr[])//Duyet mang bang pointer
{
	for (int *ptr = arr; ptr < arr+10; ptr++)
	{
		cout << *ptr << " ";
	}
}
int main()
{
	int arr[10];
	int *ptr = arr;

	NhapMang(arr);

	cout << arr[1] << endl;
	cout << ptr << endl;

	cout << (ptr + 1)  << endl;
	XuatMang(arr);
	return 0;

}
#endif//Con tro va mang


#if 0
#include<iostream>
#include<random>

using namespace std;
void NhapMang(int arr[], int &n);
void XuatMang(int arr[], int n);
void SaoChep(int arr[], int arr2[], int n);
void NhapMang2(int arr[], int &y, int &n);

int main()
{
	cout << "Nhap vao so luong phan tu: ";
	int x;
	cin >> x;
	int *MyArrays = new int[x];
	NhapMang(MyArrays, x);
	cout << "Mang cua ban la: " << endl;
	XuatMang(MyArrays, x);
	cout << "Nhap so luong phan tu: ";
	int y;
	cin >> y;
	int *Myarrays2 = new int[y];
	SaoChep(MyArrays, Myarrays2, y);
	delete[] MyArrays;
	NhapMang2(Myarrays2, x, y);
	cout << "Mang sao khi sao chep: " << endl;
	XuatMang(Myarrays2, y);
	delete[] Myarrays2;
	return 0;
}

void NhapMang(int arr[], int &n)
{
	random_device rd;
	mt19937 random(rd());
	uniform_int_distribution<int> uni(1, 100);

	for (int i = 0; i < n; i++)
	{
		arr[i] = uni(random);
	}
}
void XuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void SaoChep(int arr[],int arr2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
}
void NhapMang2(int arr[],int &y, int &n)
{
////	/*random_device rd;
////	mt19937 random(rd());
////	uniform_int_distribution<int> uni(1, 100);
////*/
	for (int i = y; i < n; i++)
	{
		cin >> arr[i];
	}
}

#endif//Cấp phát mảng động

#if 0

#include<iostream>
#include<random>

using namespace std;

void NhapMang(int arr[], int &size)
{
	random_device rd;
	mt19937 random(rd());
	uniform_int_distribution<int> uni(1, 1000);
	for (int i = 0; i < size; i++)
	{
		arr[i] = uni(random);
	}
}

int ChuyenDoi(int row, int col, int numberOfColumnsInArray)
{
	return (row * numberOfColumnsInArray) + col;
}

void XuatMang(int arr[], int row, int col)
{
	int idx;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			idx = (i*col) + j;
			cout << arr[idx] << " ";
		}
		cout << endl;
	}
}


int main()
{
	cout << "Nhap vao so dong: ";
	int row;
	cin >> row;
	cout << "Nhap vao so cot: ";
	int col;
	cin >> col;
	
	int size = row * col;
	int *MyArrays = new int[size];

	NhapMang(MyArrays, size);

	cout << "Mang cua ban la: " << endl;

	XuatMang(MyArrays, row, col);

	int idx = ChuyenDoi(3, 4, col);

	cout << MyArrays[idx];

	delete[] MyArrays;

}
#endif//Xay dung mang 2 chieu tren mang 1 chieu


#if 0
#include<iostream>
#include<vector>

using namespace std;



int main()
{
	vector<int> Array{1,2,3};
	int n;
	int i = 0;
	cout << "\n\t\tMoi ban nhap vao cac phan tu!!!\n\t\tNhan Enter de them phan tu moi\n\t\tNhan Space de thoat\n";
	
	do
	{
		cout << "Nhap vao phan tu " << i<<": ";
		cin >> n;
		Array[i] = n;
		i++;
		char c;
		c = getchar();
		if (c == 10)
			Array.reserve(1 + i);
	} while (getchar());

	for (int i = 0; i < 5; i++)
	{
		cout << Array[i] << " ";
	}
}
#endif//Vector

#if 0
#include<iostream>

using namespace std;

int CutDown(int n)
{
	cout << "Push: " << n << endl;
	if (n > 0)
		CutDown(n - 1);

	cout << "Pop: " << n << endl;
	return 0;

}

int main()
{
	CutDown(3);
	return 0;
}
#endif//De qui

#if 0

#include<iostream>	

using namespace std;

int main()
{
	cout << sizeof(int);
}

#endif//
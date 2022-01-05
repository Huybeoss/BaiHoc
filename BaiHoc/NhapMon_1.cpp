//#include <iostream>
//#include <iomanip>
//#include<string>
//
//using namespace std;
////int main()
////{
	
#if 0


	int nVarName ; // Gán tên biến vào vùng nhớ
	
		nVarName = 200; //Vùng nhớ có tên nVar... có giá trị bằng 100
	cout << nVarName << endl;// Xuất ra màn hình giá trị của vùng nhớ tên nVar...
	
#endif// Biến số nguyên int
	
#if 0

	
	char ch = 'L';// Gán kí tự L vào biến ch
	cout << static_cast <int> (ch) << endl;/* Xuất ra kí tự L và sử dụng hàm static... để chuyển kí tự
										   L về kiểu số thực int*/
	

#endif// Hàm số thực Char (dùng để gán số thực ở dạng số và kí tự)


#if 0



	bool b;
	b = 5 > 8;
	if (b)
		cout << "Huy Dep Trai";
	else
		cout << "Huy Xau Trai" << endl;

#endif//Lệnh bool(true, false), và lệnh if
	
#if 0


	cout << setw(5) << left << "ID";//Set khoảng cách có độ rộng là 5 căn trái và có tên ID
	cout << setw(30) << left << "Name";
	cout << setw(15) << right << "Adress" << endl;

	cout << setfill('.');//Set khoảng trắng thay bằng dấu chấm
	cout << setw(50) << '.' << endl;

	cout << setfill(' ');

	string a;
	string b, c;
	getline(cin, a);
	cout << setw(5) << left << a;

	getline(cin, b);
	cout << setw(30) << left << b;

	getline(cin, c);
	cout << setw(15) << right << c << endl;


#endif// Nhập và xuất, set khoảng trắng và độ rộng
	
#if 0
	cout << "Enter an integer: ";
	int x;
	cin >> x;

	cout << "Enter another integer: ";
	int y;
	cin >> y;

	if (x == y)
		cout << x << " == " << y << "\n";
	if (x != y)
		cout << x << " != " << y << "\n";// Khác
	if (x > y)
		cout << x << " > " << y << "\n";
	if (x < y)
		cout << x << " < " << y << "\n";
	if (x >= y)
		cout << x << " >= " << y << "\n";// Lớn hơn hoặc bằng
	if (x <= y)
		cout << x << " <= " << y << "\n";

#endif// Toán tử quan hệ


#if 0


	cout << "Enter a number: ";
	int value;
	cin >> value;

	if (!value)// Toán tử logic NOT

		cout << value << " is false" << endl;
	else
		cout << value << " is true" << endl;

	if ((value > 1) && (value < 100))// Toán tử logic AND

		cout << value << " is between 1 and 100" << endl;
	else
		cout << value << " is not between 1 and 100" << endl;

	if ((value == 1) || (value == 100))// Toán tử logic OR

		cout << value << " == 1 or " << value << " == 100" << endl;
	else
		cout << value << " != 1 or " << value << " != 100" << endl;

#endif// Toán tử logic
#if 0
 
	int x{ 6 }, y{ 9 }, max;
	if (x > y)// Sử dụng câu điều kiện if 
	{
		max = x;
	}
	else
	{
		max = y;
	}
	cout << "Max = " << max << endl;

	// Tương đương với
	max = (x > y) ? x : y;//Sử dụng toán tử điều kiện " (condition)?value1:value2 "
	cout << "Max = " << max << endl;
#endif// Toán tử điều kiện if

#if 0

	bool bIsVip = true;

	// Initializing a const variable
	const double dPrice = bIsVip ? 23.500 : 10.100;/*Sử dụng biến khai báo hằng số(const) và biến số chấm
												   động double, nếu dPrice = bÍVip thì trảvề giá trị 23.5
												   và ngược lại*/
	cout << dPrice << endl;

#endif//Sử dụng toán tử điều kiện khai báo hằng số

#if 0

	//string str1("Xin Chao Minh La Huy");
	//cout << str1 << endl;

	cout << "*Nhap vao ten cua ban: ";
	string strName;
	getline(cin, strName);

	cout << "*Nhap vao tuoi cua ban: ";
	string strAge;
	getline(cin, strAge);

	cout << "-Ten cua ban la: " << strName << endl;
	cout << "-Tuoi cua ban la: " << strAge << endl;

#endif // Biến string (Khai báo chuổi kí tự)

#if 0
	cout << "Nhap van ban xuong dong: ";
	string str1;
	getline(cin, str1, '-');//Thêm vào kí tự này khi bấm enter lệnh getline không kết thúc chương trình
							// đến khi gặp kí tự '-'
#endif//Khai báo cần xuống dòng

#if 0
#include <iostream>
#include <iomanip>
#include<string>
//
using namespace std;
int main()
{
	cout << "Nhap vao ho: ";
	string str1;
	getline(cin, str1);

	cout << "Nhap vao ten: ";
	string str2;
	getline(cin, str2);

	string str3(str1 + ' ' + str2);
	cout << "Ho va ten cua ban la: " << str3 << endl;

}
#endif//Nối chuổi lại với nhau

#if 0
	int ID()//Khai báo biến tỉnh
	{
		static int id(0);
		++id;
		return id;
}
	int main()
	{
		int nid(ID());
		string str("Xin chao!!");
		cout << nid << ": " << str << endl;

		int nid1(ID());
		string str1("Minh la Huy");
		cout << nid1 << ": " << str1 << endl;

		int nid2(ID());
		string str2("Rat vui duoc lam quen");
		cout << nid2 << ": " << str2 << endl;

		return 0;
	}
#endif// Biển tỉnh



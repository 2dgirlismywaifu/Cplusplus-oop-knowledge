#include <iostream>
#include <exception>
#include <stdio.h>
#include <conio.h>
using namespace std;

class myprimeexception : public exception {
public:
	const char* what() const throw()
	{
		return "gia tri khong hop le ";
	}
};
class number {
private:
	int a;

public:
	number() {}~number() {}
	void geta(int a) { a = a; if (a <= 0) throw myprimeexception(); }
	int seta(void) { return a; }

	void SquareNumber()
	{
		int i = 0;
		//kiểm tra dãy số
		while (i * i <= a) {
			if (i * i == a) {
				cout << boolalpha << a << " la so chinh phuong! " << true << endl;
			}
			++i;
		}
		cout << boolalpha << a << "  khong la so chinh phuong! " << false << endl;
		
	}
    void  ktSoHoanChinh(int a) {
	cout << endl;
	int sum = 0;
	if (a <= 1)
		throw myprimeexception();
	for (int i = 1; i < a; i++)
		if (a % i == 0)
		   sum += i;
		if (sum == a) 
			cout << boolalpha << a << " la so hoan chinh! " << false << endl;
		else 
			cout << boolalpha << a << " khong la so hoan chinh! " << true << endl;
	}
};
void indaycp(int n) {
	//in dãy số từ 1 đến N
	for (int i = 1; i <= n; i++)
	{
		for (int x = 1; x <= i; x++)
		{
			if (x * x == i)
				cout << " " << i;
		}
	}
}
class seriperfectnumbers
{
private:
	long long n;
public:
	seriperfectnumbers(long long n);
	void setn(long long n) { n = n; }
	int getn() { return n; }
	bool check(long long n);/////ham kiem tra 
	void xuatday(); //////////ham xuat
};

seriperfectnumbers::seriperfectnumbers(long long n)
{
	this->n = n;
};
/////// kiem tra
bool seriperfectnumbers::check(long long n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n) return true;
	return false;
};
/////////xuat
void seriperfectnumbers::xuatday()
{
	long long sum = 0;
	cout << "=========Day so hoan hao=============" << endl;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (check(i))
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << "\nTong cac so hoang hao la: " << sum;
}
int main() {
			int a;
			number obj;
			try {
				cout << "nhap a "; cin >> a;
				obj.geta(a);
				obj.SquareNumber();
				obj.ktSoHoanChinh(a);
			}
			catch (myprimeexception& e) {
				cout << e.what();
			}
			return 0;

}
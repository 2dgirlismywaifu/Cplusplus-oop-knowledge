#include <iostream>
#include<iomanip>
using namespace std;


class Number
{
public:
	void seta(int a) { a = a; }
	int geta(void) { return a; }
	void setb(int b) { b = b; }
	int getb(void) { return b; }
	Number(int a, int b);
	~Number();

protected:
	int a;
	int b;
};
class GCD : public Number
{
public:
	GCD(int a, int b);
	~GCD();
	void ucln(void); //tim uoc chung lon nhat
};
class prime : public Number
{
public:
	prime(int a, int b);
	~prime();
	void checkprime(void); 
};
class myPrimeException : public exception {
public:
	myPrimeException() : exception(" khong phai so nguyen to ") {
	}
};

Number::Number(int a, int b)
{
	this->a = a;
	this->b = b;
}
Number::~Number()
{
}
GCD::GCD(int a, int b) : Number(a, b)
{
}
GCD::~GCD()
{
}
prime::prime(int a, int b) : Number(a, b)
{
}
prime::~prime()
{
}
void GCD::ucln() {
	try {
		if (a > 0 && b > 0) {
			while (a != b) {
				if (a > b) {
					a -= b;
				}
				else {
					b -= a;
				}
			}
			cout << "Uoc chung lon nhat cua (" << a << "," << b << ") la: " << a << endl;
		}
		else if (a < 0 || b < 0) {
			throw exception("So khong hop le");
		}
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}
void prime::checkprime()  {
	int counta = 0;
	int countb = 0;
	try {
		if (a > 2 && b > 2) {
			for (int i = 2; i <= (int)sqrt(a); i++) {
				if (a % i == 0)
					counta++;
			}
			if (counta == 0) {
				cout << boolalpha << a << " la so nguyen to: " << true << endl;
			}
			else {
				cout << boolalpha << a << " khong phai so nguyen to: " << false << endl;
			}
		
		    for (int j = 2; j <= sqrt(b); j++) {
				if (b % j == 0)
					countb++;
			}
			if (countb == 0) {
				cout << boolalpha << b << " la so nguyen to: " << true << endl;
			}
			else {
				cout << boolalpha << b << " khong phai so nguyen to: " << false << endl;
			}
		}
		else  { 
			throw (a); 
			throw (b);
		}
	}
	catch (...) {
		myPrimeException e;
		cout << boolalpha << a << e.what() << false << endl;
		cout << boolalpha << b << e.what() << false << endl;
	}
	
}

int main() {
	int a, b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	Number n(a, b);
	GCD g(a, b);
	prime p(a, b);
	g.ucln();
	p.checkprime(); 

	return 0;
}

//tạo hàm mặc định
#include<iostream>
using namespace std;

class ex {
public:
	int a, b;
	//Hàm tạo mặc định
	ex() {
		a = 10;
		b = 20;
	}
	//Khai báo hàm thành viên
	void setA(int A) { a = A; }
	void setB(int B) { b = B; }
	int getA() { return a; }
	int getB() { return b; }
};

int main() {
	ex t;
	cout << "Su dung ham mac dinh" << endl;
	cout << "Toa do (" << t.getA() << "," << t.getB() << ")" << endl;
	return 0;
}
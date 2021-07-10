//Hàm tham số parameters constructor
#include<iostream>
using namespace std;

class ex {
private:
	int x, y;
public:
	//Hàm tạo có tham số
	 ex(int x1, int y1) {
		x = x1;
		y = y1;
	}
	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	//Gọi hàm tạo tham số
	ex p1(20, 15);
	//Truy cập các giá trị được gán bởi hàm tạo
	cout << "Toa do (" << p1.getX() << "," << p1.getY() << ")" << endl;
	return 0;
}
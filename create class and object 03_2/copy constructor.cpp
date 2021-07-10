//copy constructor
#include<iostream>
using namespace std;

class Point {
private: int x, y;
public:
	//Hàm constructor
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
	//Hàm copy constructor
	Point(const Point& p2) {
		x = p2.x;
		y = p2.y;
	}
	//Khai báo các hàm thành viên
	void setX(int X) { x = X; }
	void setY(int Y) { y = Y; }
	int getX() { return x; }
	int getY() { return y; }
};

int main() {
	//gọi hàm tạo
	Point p1(10, 15);
	//Gọi hàm sao chép
	Point p2 = p1;
	//Truy cập các giá trị được tạo bởi hàm constructor
	cout << "Su dung ham constructor" << endl;
	cout << "Tao do (" << p1.getX() << "," << p1.getY() << ")" << endl;
	cout << "Su dung ham sao chep constructor" << endl;
	cout << "Tao do (" << p2.getX() << "," << p2.getY() << ")" << endl;

	return 0;
}
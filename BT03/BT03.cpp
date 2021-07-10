/*tính diện tích hình tròn và thể tích hình trụ*/

#include <iostream>
#include <cmath>

using namespace std;

class Circle {
public:
	int x;
	void setX(int X);
	int getX(void);
};
class Cylinder : public Circle {
public:
	int y;
	void setY(int X);
	int getY(void);
};
void Circle::setX(int X) { x = X; }
int Circle::getX(void) { return x; }
void Cylinder::setY(int Y) { y = Y; }
int Cylinder::getY(void) { return y; }

int main()
{
	int s;
	const double PI{ 3.14159 };
	Cylinder c;
	c.setX(5);
	c.setY(10);
	cout << "Day la hinh tron voi ban kinh: " << c.getX() << endl;
	cout << "Day la hinh tru voi day hinh tron tren co chieu cao: " << c.getY() << endl;
	if (c.getX() <= 0, c.getY() <= 0) {
		cout << "Khong the thuc hien duoc" << endl;
	}
	else {
		s = c.getX() * c.getX() * PI;
		cout << "Dien tich hinh tron la: " << c.getX() << "^2 x " << PI
			<< " = " << s << endl;
		cout << "The tich hinh tru la: " << c.getX() << "^2 x " << PI 
			<< " x " << c.getY() << " = " << s * c.getY() << endl;
	}
}


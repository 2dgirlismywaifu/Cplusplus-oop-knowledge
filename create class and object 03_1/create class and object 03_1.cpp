//tạo các methods

#include <iostream>
using namespace std;

class Point {
private:
    //Khai báo các biến riêng trong class
    int x, y;
public:
    //Khai báo các methods
    void setX(int X);
    int getX(void);
    void setY(int Y);
    int getY(void);
    //Khai báo hàm tạo không tham số
    Point();
    //Khai báo hàm tạo có tham số
    Point(int X, int Y);
};

//Hàm tạo không tham số
Point::Point() {
    cout << "Doi tuong da tao" << endl;
}
//Hàm tạo có tham số
Point::Point(int X, int Y) {
    x = X;
    y = Y;
}
//cài đặt các hàm thành viên
void Point::setX(int X) { x = X; }
int Point::getX(void) { return x; }
void Point::setY(int Y) { y = Y; }
int Point::getY(void) { return y; }
int main()
{
    //Tạo đối tượng
    Point p;
    //Thiết lập các giá trị ban đầu
    p.setX(5);
    p.setY(6);
    //In ra các giá trị vừa thiết lập
    cout << "Toa do diem (" << p.getX() << "," << p.getY() << ")" << endl;
    return 0;
}
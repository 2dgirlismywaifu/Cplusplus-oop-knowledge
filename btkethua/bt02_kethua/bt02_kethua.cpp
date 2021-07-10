#include <iostream>
#include <cmath>
const double PI{ 3.14159 };
using namespace std;

class point{
private:
    int x, y;
public:
    void setX(int x) { x = x; }
    int getX(void) { return x; }
    void setY(int y) { y = y; };
    int getY(void) { return y; }
    point(int x, int y);
};
point::point(int x, int y) {
    this->x = x;
    this->y = y;
}
class circle : public point{
private:
    double r;
    int x1, y1; //toa do diem trong duong tron
public:
    circle(int x, int x1, int y, int y1, double r);
    void setX1(int x1) { x1 = x1; }
    int getX(void) { return x1; }
    void setY1(int y1) { y1 = y1; };
    int getY1(void) { return y1; }
    void setR(double r) { r = r; }
    int getR(void) { return r; }
    float bankinh();
    float getArea();
    float getPerimeter();
    void ketqua1(void);
};
circle::circle(int x, int x1, int y, int y1, double r) : point(x, y) {
    this->x1 = x1;
    this->y1 = y1;
    this->r = r;
}
float circle::bankinh() {
    return r = sqrt(pow((this->x1 - point::getX()), 2) + pow((this->y1 - point::getY()), 2));
}
float circle::getArea() {
    if (r > 0) {
        return pow(bankinh(), 2) * PI;
    }
    else {
        return 0;
    }
}
float circle::getPerimeter() {
    if (r > 0) {
        return bankinh() * 2 * PI;
    }
    else {
        return 0;
    }
}
class cylinder : public circle{
private:
    float h;
public:
    cylinder(int x, int x1, int y, int y1, double r, float h);
    void setH(float h) { h = h; }
    int getH(void) { return h; }
    float getVolume();
    float getTotalArea();
    void ketqua2(void);
};
cylinder::cylinder(int x, int x1, int y, int y1, double r, float h) 
    : circle(x,x1,y,y1,r)
{
    this->h = h;
}
float cylinder::getVolume() {
    if (h > 0) {
        return circle::getArea() * h;
    }
    else {
        return 0;
    }
}
float cylinder::getTotalArea() {
    if (h > 0) {
        return circle::getArea() * 2 + circle::getPerimeter() * h;
    }
    else { return 0; }
}
void circle::ketqua1() {
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this ->getPerimeter() << endl;
}
void cylinder::ketqua2() {
    cout << "The tich: " << this->getVolume() << endl;
    cout << "Dien tich toan phan: " << this->getTotalArea() << endl;
}
int main()
{
    float h;
    double r{10};
    int x, x1{11}, y, y1{11};
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
    cout << "Nhap h: "; cin >> h;
    while (x < 0 || y < 0 || h < 0) {
        cout << "Nhap lai" << endl;
        cout << "Nhap x: "; cin >> x;
        cout << "Nhap y: "; cin >> y;
        cout << "Nhap h: "; cin >> h;
    }
    circle circle(x, x1,  y,  y1,  r);
    circle.setX1(2);
    circle.setY1(4);
    cylinder cylinder(x, x1, y, y1, r, h);
    circle.ketqua1();
    cylinder.ketqua2();
    return 0;
}
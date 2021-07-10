#include <iostream>
#include <cmath>

const double PI{ 3.14159 };
using namespace std;

class circle {
private:
    int x, y;
    float r;
public:
    void setX(int x) { x = x; }
    int getX(void) { return x; }
    void setY(int y) { y = y; }
    int getY(void) { return y; }
    void setR(float r) { r = r; }
    int getR(void) { return r; }
    circle(int x, int y, float r);
    float getArea(); //dien tich
    float getPerimeter(); //chu vi
    void getInforCircle(void);
};

circle::circle(int x, int y, float r) {
    this->x = x;
    this->y = y;
    this->r = r;
}
void circle::getInforCircle() {
    cout << "Thong tin hinh tron" << endl;
    cout << "Toa do tam: (" << this->x << "," << this->y << ")" << endl;
    cout << "Ban kinh: " << this->r << endl;
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this->getPerimeter() << endl;
}

float circle::getArea() {
    if (r > 0) {
        return r * r * PI;

    }
    else {
        return 0;
    }
}

float circle::getPerimeter() {
    if (r > 0) {
        return r * 2 * PI;
    }
    else {
        return 0;
    }
}
class cylinder :public circle {
private:
    float h;
public:
    void setH(float h) { h = h; }
    float getH(void) { return h; }
    cylinder(int x, int y, float r, float h);
    float getVolume(); //the tich
    float getTotalArea(); //dien tich toan phan
    void getInfoCylinder(void);
};
cylinder::cylinder(int x, int y, float r, float h) : circle(x, y, r) {
    this->h = h;
}
void cylinder::getInfoCylinder() {
    cout << "Thong tin hinh tru" << endl;
    cout << "Toa do tam: (" << circle::getX() << "," << circle::getY() << ")" << endl;
    cout << "Ban kinh: " << circle::getR() << endl;
    cout << "Chieu cao: " << this->h << endl;
    cout << "The tich: " << this->getVolume() << endl;
    cout << "Dien tich toan phan: " << this->getTotalArea() << endl;
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
    else {
        return 0;
    }
}
int main()
{
    int x, y;
    float r,h;
    cout << "toa do tam: "; cin >> x >> y;
    cout << "ban kinh: "; cin >> r;
    cout << "chieu cao: "; cin >> h;
    while (x < 0 || y < 0 || h < 0) {
        cout << "Nhap lai" << endl;
        cout << "Nhap x: "; cin >> x;
        cout << "Nhap y: "; cin >> y;
        cout << "ban kinh: "; cin >> r;
        cout << "Nhap h: "; cin >> h;
    }
    circle circle(x, y, r);
    cylinder cylinder(x, y, r, h);
    circle.getInforCircle();
    cylinder.getInfoCylinder();
    return 0;
}



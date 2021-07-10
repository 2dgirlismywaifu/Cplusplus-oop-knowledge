
#include <iostream>
using namespace std;

//ham Rectangle (hinh chu nhat)
class Rectangle {
private:
    float x, y;
public:
    void setX(float x) { x = x; }
    float getX(void) { return x; }
    void setY(float y) { y = y; };
    float getY(void) { return y; }
    Rectangle(float x, float y);
    float getArea(); //dien tich
    float getPerimeter(); //chu vi
    void getInfoRectangle(void); //thông tin hình chữ nhật
};
Rectangle::Rectangle(float x, float y) {
    this->x = x;
    this->y = y;
}

void Rectangle::getInfoRectangle () {
    cout << "=====Thong tin hinh chu nhat=====" << endl;
    cout << "Chieu dai: " << this->getX() << endl;
    cout << "Chieu rong: " << this->getY() << endl;
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi " << this->getPerimeter() << endl;
}
//tinh dien tich
float Rectangle::getArea() {
    if (x > 0 && y > 0) {
        return x * y;
    }
    else {
        return 0;
    }
}
//tinh chu vi
float  Rectangle::getPerimeter() {
    if (x > 0 && y > 0) {
        return (x + y) * 2;
    }
    else {
        return 0;
    }
}
//ham Rectanglular (hinh hop chu nhat) ke thua ham Rectangle
class Rectanglular : public Rectangle {
private:
    float h;
public:
    Rectanglular(float x, float y, float h);
    void setH(float h) { h = h; }
    float getH(void) { return h; }
    float getVolume(); //the tich
    float getTotalArea(); //dien tich toan phan
    void getInfoRectanglular(void);
};
Rectanglular::Rectanglular(float x, float y, float h) : Rectangle(x,y) {
    this->h = h;
}

void Rectanglular::getInfoRectanglular() {
    cout << "=====Thong tin hinh hop chu nhat=====" << endl;
    cout << "Chieu dai day: " << Rectangle::getX() << endl;
    cout << "Chieu rong day: " << Rectangle::getY() << endl;
    cout << "Dien tich day: " << Rectangle::getArea() << endl;
    cout << "Chu vi day: " << Rectangle::getPerimeter() << endl;
    cout << "The tich: " << this->getVolume() << endl;
    cout << "Dien tich toan phan: " << this->getTotalArea() << endl;
}
//the tich hinh hop chu nhat
float Rectanglular::getVolume() {
    if (h > 0) {
        return Rectangle::getArea() * h;
    }
    else {
        return 0;
    }
}
//tinh dien tich toan phan
float Rectanglular::getTotalArea() {
    if (h > 0) {
        return Rectangle::getPerimeter() * h + 2 * Rectangle::getArea();
    }
    else {
        return 0;
    }
}
int main()
{
    float x, y, h;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
    cout << "Nhap h: "; cin >> h;
    while (x < 0 || y < 0 || h < 0) {
        cout << "Nhap lai" << endl;
        cout << "Nhap x: "; cin >> x;
        cout << "Nhap y: "; cin >> y;
        cout << "Nhap h: "; cin >> h;
    }
    
    Rectangle Rectangle(x, y);
    Rectanglular Rectanglular(x, y, h);
    Rectangle.getInfoRectangle();
    Rectanglular.getInfoRectanglular();
    return 0;
}

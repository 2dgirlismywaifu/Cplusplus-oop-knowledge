#include <iostream>
using namespace std;

class shade {
private:
    //length: x
    //width: y
    float x, y;
public:
    void setX(float x) { x = x; }
    float getX(void) { return x; }
    void setY(float y) { y = y; };
    float getY(void) { return y; }
    shade(float x, float y);
};
shade::shade(float x, float y) {
    this->x = x;
    this->y = y;
}
class rectangle :public shade {
public:
    rectangle(float x, float y);
    float getArea(); //dien tich
    float getPerimeter(); //chu vi
    void ketqua1(void);
};
rectangle::rectangle(float x, float y) : shade(x,y) {

}
float rectangle::getArea() {
    if (this->getX() > 0 && this->getY() > 0) {
        return this->getX() * this->getY();
    }
    else {
        return 0;
    }
}
float rectangle::getPerimeter() {
    if (this->getX() > 0 && this->getY() > 0) {
        return (this->getX() + this->getY()) * 2;
    }
    else {
        return 0;
    }
}
class rectanglular : public rectangle {
private:
    float h;
public:
    rectanglular(float x, float y, float h);
    void setH(float h) { h = h; }
    float getH(void) { return h; }
    float getVolume(); //the tich
    float getTotalArea(); //dien tich toan phan
    void ketqua2(void);
};
rectanglular::rectanglular(float x, float y, float h) : rectangle(x, y) {
    this->h = h;
}
float rectanglular::getVolume() {
    if (h > 0) {
        return rectangle::getArea() * h;
    }
    else {
        return 0;
    }
}
//tinh dien tich toan phan
float rectanglular::getTotalArea() {
    if (h > 0) { 
       return rectangle::getPerimeter() * h + 2 * rectangle::getArea();
    }
    else {
        return 0;
    }
}
void rectangle::ketqua1() {
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this->getPerimeter() << endl;
}
void rectanglular::ketqua2() {
    cout << "The tich: " << getVolume() << endl;
    cout << "Dien tich toan phan: " << getTotalArea() << endl;
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

    rectangle rectangle(x, y);
    rectanglular rectanglular(x, y, h);
    rectangle.ketqua1();
    rectanglular.ketqua2();
    return 0;
}
#include <iostream>
using namespace std;

class shape {
protected:
    float x, y;
public:
    void setX(float x) { x = x; }
    float getX(void) { return x; }
    void setY(float Y) { y = y; }
    float getY(void) { return y; }
    shape(float x, float y);
    virtual float getArea() { return 0; }
    virtual float getPerimeter() { return 0; }
    virtual void getInfo(void);
};

class rectangle : public shape {
public:
    rectangle(float x = 0, float y = 0);
    float getArea();
    float getPerimeter();
    void getInfo(void);
};

class square : public shape {
public:
    square(float x = 0, float y = 0);
    float getArea();
    float getPerimeter();
    void getInfo(void);
};

shape::shape(float x, float y) {
    x = x;
    y = y;
}
rectangle::rectangle(float x, float y) : shape(x, y) {
    this->x = x;
    this->y = y;
}
square::square(float x, float y) : shape(x, y) {
    this->x = x;
    this->y = y;
}

void shape::getInfo() {
    cout << "Thong tin ve hinh" << endl;
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this->getPerimeter() << endl;
}


void rectangle::getInfo() {
    cout << "Thong tin hinh chu nhat" << endl;
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this->getPerimeter() << endl;
}
float rectangle::getArea() {
    if (x > 0 && y > 0) {
        return x * y;
    }
    else {
        return 0;
    }
}
float rectangle::getPerimeter() {
    if (x > 0 && y > 0) {
        return (x + y) * 2;
    }
    else {
        return 0;
    }
}


void square::getInfo() {
    cout << "Thong tin hinh vuong" << endl;
    cout << "Dien tich: " << this->getArea() << endl;
    cout << "Chu vi: " << this->getPerimeter() << endl;
}
float square::getArea() {
    if (x > 0 && y > 0) {
        return x * y;
    }
    else {
        return 0;
    }
}
float square::getPerimeter() {
    if (x > 0 && y > 0) {
        return (x + y) * 2;
    }
    else {
        return 0;
    }
}

int main()
{
    float x, y;
    cout << "Nhap chieu dai: " << endl; cin >> x;
    cout << "Nhap chieu rong: " << endl; cin >> y;
    while (x < 0 || y < 0 || cin.fail()) {
        cout << "Khong co canh am hoac nhap khong dung dinh dang" << endl;
        cin.clear(); //xoá flags error
        cin.ignore(numeric_limits<streamsize>::max(),'\n'); //xoa bo nho dem
        cout << "Nhap lai chieu dai: "; cin >> x;
        cout << "Nhap lai chieu rong: "; cin >> y;
    }

    rectangle rectangle(x, y);
    square square(x, y);
    shape* shape; //khai bao bien con tro shape  
    if (x != y) { //x khac y la hinh chu nhat
        shape = &rectangle; //lay dia chi cua rectangle
        //truy cap ham thanh vien
        shape->getArea();
        shape->getPerimeter();
        shape->getInfo();
    }
    else if (x == y) {
        shape = &square; //lay dia chi cua square
        //truy cap ham thanh vien
        shape->getArea();
        shape->getPerimeter();
        shape->getInfo();
    }
    system("pause");
    return 0;
}


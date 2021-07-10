/*tính diện tích hình chữ nhật và thể tích hình hộp chữ nhật có đáy là hcn*/


#include <iostream>
using namespace std;

class hinhchunhat {
public:
    int x, y;
    void setX(int X);
    int getX(void);
    void setY(int Y);
    int getY(void);
};

class hopchunhat : public hinhchunhat {
public:
    int z;
    void setZ(int z);
    int getZ(void);
};
void hinhchunhat::setX(int X) { x = X; }
int hinhchunhat::getX(void) { return x; }
void hinhchunhat::setY(int Y) { y = Y; }
int hinhchunhat::getY(void) { return y; }
void hopchunhat::setZ(int Z) { z = Z;}
int hopchunhat::getZ(void) { return z; }

int main()
{
    int s;
    hopchunhat t1;
    t1.setX(5);
    t1.setY(4);
    t1.setZ(10);
    cout << "Day la hinh chu nhat co cac canh lan luot la: "
        << t1.getX() << "," << t1.getY() << endl;
    cout << "Day la hinh hop chu nhat co day la hinh chu nhat voi chieu cao la: "
        << t1.getZ() << endl;
    if (t1.getX() <= 0, t1.getY() <= 0, t1.getZ() <= 0) {
        cout << "Khong the tinh duoc" << endl;
    }
    else {
        s = t1.getX() * t1.getY();
        cout << "Dien tich hinh chu nhat: " << t1.getX() << " x " << t1.getY() 
            << " = " << s << endl;
        cout << "The tich hinh hop chu nhat: "
            << t1.getX() << "x" << t1.getY() << " x " << t1.getZ()
            << " = " << s * t1.getZ() << endl;
    }
    
    return 0;
}


#include <iostream>
using namespace std;

class hinhchunhat {
  //khai báo biến riêng  
 private:
	int x, y;
public:
    void setX(int X);
    int getX(void);
    void setY(int Y);
    int getY(void);
    //khai báo hàm tạo ko tham số
    hinhchunhat();
    //khai báo hàm có tham số
    hinhchunhat(int X, int Y);
};
//hàm tạo không tham số
hinhchunhat::hinhchunhat() {
    cout << "Doi tuong da tao" << endl;
}
//hàm tạo có tham số
hinhchunhat::hinhchunhat(int X, int Y) {
    x = X;
    y = Y;
}
void hinhchunhat::setX(int X) { x = X; }
int hinhchunhat::getX(void) { return x; }
void hinhchunhat::setY(int Y) { y = Y; }
int hinhchunhat::getY(void) { return y; }
int main()
{
    hinhchunhat h;
    h.setX(5);
    h.setY(4);
    if (h.getX() <= 0, h.getY() <= 0) {
        cout << "Khong the tinh duoc" << endl;
    }
    else if (h.getX()==h.getY()) {
        cout << "Day la hinh vuong" << endl;
        cout << "Chu vi hinh vuong: " << h.getX() << "x" << h.getY() << "="
            << h.getX() * 4 << endl;
        cout << "Dien tich hinh vuong: " << h.getX() << "x" << h.getY() << "="
            << h.getX() * h.getY() << endl;
    }
    else {
        cout << "Day la hinh chu nhat" << endl;
        cout << "Chu vi hinh chu nhat: (" << h.getX() << "+" << h.getY() << ")x2="
            << (h.getX() + h.getY())*2 << endl;

        cout << "Dien tich hinh chu nhat: " << h.getX() << "x" << h.getY() << "="
            << h.getX() * h.getY() << endl;
    }
    return 0;
}


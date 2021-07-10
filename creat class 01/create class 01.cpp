//tao class
#include <iostream>
using namespace std;

//Tạo một lớp
class person {
public:
    //các dữ liệu thành viên
    string name;
    int id;
    //Hàm thành viên
    void getdetails() {
        cout << "Ten ban la: " << name << endl;
        cout << "Ma sinh vien: " << id << endl;
    }
};

int main()
{
    //Khai báo đối tượng của class
    person p;
    //truy cập dữ liệu hàm thành viên
    p.name = "Ngo Thanh Long";
    p.id = 1855010101;
    //truy cập hàm thành viên
    p.getdetails();

    return 0;
}


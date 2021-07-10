/*
* Hàm thành viên có 2 loại:
* inside function (khai báo bên trong class)
* outside function (khai báo bên ngoài class)
*/

#include <iostream>
using namespace std;

class something {
public:
    string name;
    int id;
    //Hàm không định nghĩa bên trong lớp (outside function)
    void printname();
    //Hàm định nghĩa bên trong lớp (inside function)
    void printid() {
        cout << "id: " << id << endl;
    }
};

//Sử dụng toán tử phân giải phạm vi ::
void something::printname() { //outside function
    cout << "name: " << name << endl;
}

int main()
{
    something t1;
    t1.name = "Nguyen Van A";
    t1.id = 28;
    //gọi hàm printname
    t1.printname();
    cout << endl;
    //gọi hàm printid
    t1.printid();
    cout << endl;

    return 0;
}


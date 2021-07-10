#include <iostream>
using namespace std;

int main()
{
    float x, y;
    cout << "Nhap chieu dai: "; cin >> x;
    cout << "Nhap chieu rong: "; cin >> y;
    cin.ignore(256, '\n');
    cout << x << y;
    while (x < 0 || y < 0 || cin.fail()) {
        cout << "Khong co canh am hoac nhap khong dung dinh dang" << endl;
        //cin.clear(); //xoá flags error
        cin.ignore(2, '\n');
        cout << "Nhap lai chieu dai: "; cin >> x;
        cout << "Nhap lai chieu rong: "; cin >> y;
        cout << x << y << endl;
    }
    return 0;
}
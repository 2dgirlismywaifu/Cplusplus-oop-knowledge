#include <iostream>

using namespace std;

class employee { //nhan vien
protected:
    string name; //ho ten 
    int age; //tuoi
    bool gender; //gioi tinh true(nam), false(nu)
public:
    virtual void setname(string name) { name = name; }
    string getname(void) { return name; }
    virtual void setage(int age) { age = age; }
    int getage(void) { return age; }
    virtual void setgender(bool gender) { gender = gender; }
    bool getgender(void) { return gender; }
    employee(string name, int age, bool gender);
};
class office : public employee { //nhan vien van phong
private:
    int ID; //ma phong ban
    string phongban; //ten phong ban
public:
    virtual void setID(int ID) { ID = ID; }
    int getID(void) { return ID; }
    virtual void setPB(string phongban) { phongban = phongban; }
    string getPB(void) { return phongban; }
    office(string name, int age, bool gender, int ID, string phongban);
    void Input01(void);
    void Return01(void);
};
class facultry : public employee { //giao vien
private:
    int makhoa; //ma khoa
    string tenkhoa; //ten khoa
public:
    virtual void setMK(int makhoa) { makhoa = makhoa; }
    int getMK(void) { return makhoa; }
    virtual void setTK(string tenkhoa) { tenkhoa = tenkhoa; }
    string getTK(void) { return tenkhoa; }
    facultry(string name, int age, bool gender, int makhoa, string tenkhoa);
    void Input02(void);
    void Return02(void);
};
employee::employee(string n, int a, bool g) {
    name = n;
    age = a;
    gender = g;
}
office::office(string n, int a, bool g, int ID, string pb) 
    : employee(n, a, g) {
    this->ID = ID;
    phongban = pb;
}
facultry::facultry(string n, int a, bool g, int mk, string tk)
    : employee(n, a, g) {
    makhoa = mk;
    tenkhoa = tk;
}
void office::Input01()  {
    cout << "Ho va ten: "; cin >> name;
    cout << "Tuoi: "; cin >> age;
    cout << "Gioi tinh: "; cin >> gender;
    cout << "Ma phong ban: "; cin >> this->ID;
    cout << "Ten phong ban: ";  cin >> phongban;
}
void facultry::Input02() {
    cout << "Ho va ten: "; cin >> name;
    cout << "Tuoi: "; cin >> age;
    cout << "Gioi tinh: "; cin >>gender;
    cout << "Ma khoa: "; cin >> makhoa;
    cout << "Ten ma khoa: "; cin >> tenkhoa; 
}
int main()
{    
    string n, pb,tk;
    int a, ID, mk;
    bool g;
    int opt; //lua chon
    cout << "===Them nhan vien phong ban hay giao vien===" << endl;
    cout << "1.Nhan vien phong ban" << endl;
    cout << "2.Nhan vien giao vien" << endl;
    cout << "Lua chon: "; cin >> opt;
    if (opt == 1) {
        office office(n, a, g,  ID, pb);
        office.Input01();
    }
    else if (opt == 2) {
        facultry facultry( n, a,  g,  mk,  tk);
        
    }
    else {
        cout << "Lua chon khong ton tai";
    }
    return 0;
}
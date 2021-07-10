// tam giac pascal

#include <iostream>
#include<iomanip>
using namespace std;


class giaithua {
private:
    int n;
public:
    void setN(int n) { n = n; }
    int getN(void) { return n; }
    giaithua(int n);
    int tinhgiaithua(int n);
};
giaithua::giaithua(int n) {
    this->n = n;
}
int giaithua::tinhgiaithua(int n) {
    if (n == 0)
        return 1;
    return n * tinhgiaithua(n - 1);
}
class tohop : public giaithua {
private:
    int k;
public:
    tohop(int n);
    int tinhtohop(int n, int k);
};
tohop::tohop(int n) : giaithua(n) { }
 int tohop::tinhtohop(int n, int k) {
     return  tinhgiaithua(n) / (tinhgiaithua(k) * tinhgiaithua(n - k));
}
class trianglepascal : public tohop {   
public:
    trianglepascal(int n);
    void intamgiac(void);    
};
trianglepascal::trianglepascal(int n) : tohop(n) { }
void trianglepascal::intamgiac() {
    for (int i = 0; i < this->getN(); i++) {
            cout << setw(1) << " ";//in ra khoang trong thanh hinh tam giac
        for (int j = 0; j < (i + 1); j++)
            cout << setw(3) << tinhtohop(i, j) << setw(1) << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Nhap n: "; cin >> n;
    while (n < 0 ) {
       
        cout << "Nhap lai n: "; cin >> n;
    }
    trianglepascal trianglepascal(n);
    trianglepascal.intamgiac();
    system("pause");
    return 0;
}












//Note: /*for (int j = 0; j < (this->getN() - i - 1); j++)*/
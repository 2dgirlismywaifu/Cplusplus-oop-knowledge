#include <iostream>
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
    tohop(int n, int k);
    void setK(int k) { k = k; }
    int getK(void) { return k; }
    float tinhtohop(int n, int k);
};
tohop::tohop(int n, int k) : giaithua(n) {
    this->k = k;
}
float tohop::tinhtohop(int n, int k) {
    if (k > 0 && k < n) {
        return  tinhgiaithua(n) / (tinhgiaithua(k) * tinhgiaithua(n - k));
    }
    else {
        cout << "k phai nho hon n" << endl;
        return -1;
    }
}
int main()
{
    int n, k;
    cout << "Nhap k: "; cin >> k;
    cout << "Nhap n: "; cin >> n;
    while (n < 0 || k < 0) {
        cout << "Nhap lai k: "; cin >> k;
        cout << "Nhap lai n: "; cin >> n;
    }
    giaithua giaithua(n);
    cout << "Giai thua " << giaithua.getN() << "! la: " << giaithua.tinhgiaithua(n) << endl;
    tohop tohop(n, k);
    cout << "Top hop chap " << tohop.getK() << " cua " << tohop.getN() << " la: "
        << tohop.tinhtohop(n,k) << endl;
    return 0;
}






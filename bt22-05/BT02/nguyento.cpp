#include <iostream>
using namespace std;

class prime
{
public:
	void setN(int n) { n = n; }
	int getN(void) { return n; }
	prime(int n);
    ~prime();
    bool ktsnt(int n);
	void printprime(void); //in day so nguyen to   
protected:
	int n;
};

class sum : public prime {
public:
    sum(int n);
    ~sum();
    int getTotal();
    void printTotal(void); //in tong cac so nguyen to
};
prime::prime(int n)
{
	this->n = n;
}
prime::~prime() {

}
sum::sum(int n) : prime(n) {  
}
sum::~sum() {

}
bool prime::ktsnt(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void prime::printprime() {
    cout << "Day so nguyen to tu 1 cho den " << n << " la: " << endl;
    for (int i = 2; i <= n; i++) {
        if (ktsnt(i) == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int sum::getTotal() {
    int s = 0;
    for (int i = 2; i <= n; i++)
        if (ktsnt(i) == 1)
            s = s + i;
    return s;
}
void sum::printTotal() {
    cout << "Tong cac so nguyen to trong day la: " << this->getTotal() << endl;
}
int main()
{
    int n;
    cout << "Nhap n: "; cin >> n;
    while (n < 1) {
        cout << "Nhap lai n: "; cin >> n;
    }
    prime prime(n);
    sum sum(n);
    prime.printprime();
    sum.printTotal();
}

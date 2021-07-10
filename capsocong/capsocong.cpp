#include <iostream>
#include <cmath>
using namespace std;

class capsc
{
public:
	void setU(float u) { u = u; }
	int getU(void) { return u; }
	void setD(float d) { d = d; }
	int getD(void) { return d; }
	void setN(int n) { n = n; }
	int getN(void) { return n; }
	capsc(float u, float d, int n);
	~capsc();
	float getSUM();
	void inday(void);
	void printSUM(void);
private:
	float u, d;
	int n;
	/*u: so hang dau
	* d: cong sai
	* n: so luong phan tu
	*/
};

capsc::capsc(float u, float d, int n)
{
	this->u = u;
	this->d = d;
	this->n = n;
}

capsc::~capsc()
{
}


void capsc::inday() {
	/*giải thích vòng lặp
	int i=u ta đặt i bằng đúng giá trị u nhập từ bàn phím
	i <= ((n - 1) * d + u) vòng lặp sẽ dừng khi i đạt đến giá trị theo công thức
	i +=d sau mỗi lần lặp tăng số đếm d*/
	cout << "Day cap so cong la: " << endl;
	for (int i = u; i <= ((n - 1) * d + u); i += d)
	{
		cout << i << " ";
	}
	cout << endl;
}

float capsc::getSUM() {
	if (n >= 2) {
		return (n * u) + ((n * (n - 1)) / 2) * d;
	}
	else {
		cout << "n = 1 nen tong bang: " << u << endl;
		return u;
	}
}
void capsc::printSUM() {
	
	cout << "Tong day so CSC là: " << this->getSUM() << endl;
	
}
int main()
{
	float u, d;
	int n;
	cout << "Nhap so hang dau: "; cin >> u;
	cout << "Nhap cong sai: "; cin >> d;
	cout << "Nhap so phan tu trong day: "; cin >> n;
	while (n < 1 || n>100) {
		cout << "So phan thu khong hop le" << endl;
		cout << "Nhap lai so phan tu: "; cin >> n;
	}

	capsc t1(u, d, n);
	t1.inday();
	t1.printSUM();
    system("PAUSE");
    return 0;
}


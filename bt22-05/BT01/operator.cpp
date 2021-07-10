#include <iostream>

using namespace std;

class pheptinh
{
public:
	void setA(float a) { a = a; }
	float getA(void) { return a; }
	void setB(float b) { b = b; }
	float getB(void) { return b; }
	pheptinh(float a, float b);
	float cong();
	float tru();
	float nhan();
	float chia();
private:
	float a, b;
};
pheptinh::pheptinh(float a, float b) {
	this->a = a;
	this->b = b;
}
float pheptinh::cong() {
	return a + b;
}
float pheptinh::tru() {
	return a - b;
}float pheptinh::nhan() {
	return a * b;
}float pheptinh::chia() {
	if (b == 0) {
		cout << "Khong co phep chia cho 0" << endl;
		return 0;
	}
	else {
		return a / b;
	}
}
int main()
{
	int opt;
	float a, b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	pheptinh pheptinh(a, b);

	cout << "Chon phep toan co ban" << endl;
	cout << "1. Phep cong" << endl;
	cout << "2. Phep tru" << endl;
	cout << "3. Phep nhan" << endl;
	cout << "4. Phep chia" << endl;
	cout << "Lua chon: "; cin >> opt;
	switch (opt)
	{
	case 1:
		pheptinh.cong();
		break;
	case 2:
		pheptinh.tru();
		break;
	case 3:
		pheptinh.nhan();
		break;
	case 4:
		pheptinh.chia();
		break;
	default:
		cout << "Khong ton tai lua chon" << endl;
		break;
	}
	system("pause");
	return 0;
}


// hàm khởi tạo constructor

#include <iostream>
using namespace std;

class ex {
public:
	int id;
	//hàm constructor mặc định
	ex() {
		cout << "Ham constructor mac dinh" << endl;
		id = 2;
	}
	//hàm constructor có tham số
	ex(int d) {
		cout << "Ham constructor co tham so" << endl;
		id = d;
	}
};

int main()
{
//t1 gọi hàm mặc định
	ex t1;
	cout << "id: " << t1.id << endl;
//t2 gọi hàm chứa tham số
	ex t2(25);
	cout << "id: " << t2.id << endl;

	return 0;
}
//Hàm huỷ deconstructor
#include<iostream>
using namespace std;

class ex {
public:
	int id;
	//Khai báo hàm huỷ
	~ex() {
		cout << "Ham huy duoc goi cho id: " << id << endl;
	}
};

int main() {
	ex t1;
	t1.id = 7;

	int i = 0;
	while (i < 5) {
		ex t2;
		t2.id = i;
		i++;
	}
	return 0;
}
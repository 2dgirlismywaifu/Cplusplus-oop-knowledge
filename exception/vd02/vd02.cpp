#include <iostream>
using namespace std;
class square
{
public:
	void seta(float a) { a = a; }
	float geta(void) { return a; }
	void setb(float b) { b = b; }
	float getb(void) { return b; }
	square(float a, float b);
	~square();
	float getArea(float a, float b);
private:
	float a;
	float b;
};

square::square(float a, float b)
{
	this->a = a;
	this->b = b;
}
square::~square()
{
}
float square::getArea(float a, float b) throw (float, float) {
	if (a <= 0) throw a;
	if (b <= 0) throw b;
	return a * b;
}
int main()
{
	try {
		float a = 0;
		float b = 5;
		square s(a, b);
		cout << "Dien tich: " << s.getArea(a, b) << endl;
	}
	catch (float a) {
		cout << "Canh ko dc bang 0" << endl;
	}
	catch (float b) {
		cout << "Canh ko dc bang 0" << endl;
	}
	
    return 0;
}


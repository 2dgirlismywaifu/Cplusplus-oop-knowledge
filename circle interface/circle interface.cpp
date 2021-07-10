#include <iostream>
#include <cmath>
const double PI{ 3.14159 };
using namespace std;

class IShape
{
public:
    virtual float getArea() = 0;
    virtual float getPerimeter() = 0;
    virtual void getInfo() = 0;
};

class circle : public IShape
{
public:
    void setr(float r) { r = r; }
    float getr(void) { return r; }
	circle(float r);
	~circle();
    float getArea();
    float getPerimeter();
    void getInfo(void);
private:
    float r;
};

class rectangle 
{
public:
    void setx(float x) { x = x; }
    float getx(void) { return x; }
    void sety(float y) { y = y; }
    float gety(void) { return y; }
	rectangle(float x, float y);
	~rectangle();
    float getArea();
    float getPerimetr();
    void getInfo(void);
private:
    float x,y;
};

circle::circle(float r)
{
    this->r = r;
}

circle::~circle()
{
}

float circle::getArea() {
    if (r > 0) {
        return r * r * PI;

    }
    else {
        return 0;
    }
}

float circle::getPerimeter() {
    if (r > 0) {
        return r * 2 * PI;
    }
    else {
        return 0;
    }
}

rectangle::rectangle(float x, float y) 
{
    this->x = x;
    this->y = y;
}

rectangle::~rectangle()
{
}

int main()
{
    system("pause");
    return 0;
}

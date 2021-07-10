#include <iostream>
using namespace std;

float division(float a, float b) {
    if (b == 0) {
        throw exception("Loi chia cho 0\n");
    }
    return (a / b);
}
int main()
{
    float a = 5;
    float b = 0;
    float result;
    try {
        result = division(a, b);
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}


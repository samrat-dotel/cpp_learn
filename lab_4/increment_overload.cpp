#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    Number operator++() { 
        value++;
        return *this;
    }

    void display() {
        cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num(5);
    num.display();

    ++num;
    num.display();

    return 0;
}

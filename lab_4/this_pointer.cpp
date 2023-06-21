#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    MyClass multiply(int factor) {
        return MyClass(this->value * factor);
    }

    void display() {
        cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj1(5);
    obj1.display(); // Output: Value: 5

    MyClass obj2 = obj1.multiply(3);
    obj2.display(); // Output: Value: 15

    return 0;
}

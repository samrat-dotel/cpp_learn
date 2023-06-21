#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    friend MyClass multiply(const MyClass& obj, int factor);

    void display() {
        cout << "Value: " << value << std::endl;
    }
};

MyClass multiply(const MyClass& obj, int factor) {
    return MyClass(obj.value * factor);
}

int main() {
    MyClass obj1(5);
    obj1.display(); // Output: Value: 5

    MyClass obj2 = multiply(obj1, 3);
    obj2.display(); // Output: Value: 15

    return 0;
}

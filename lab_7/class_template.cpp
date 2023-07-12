/* WAP to implement class template. */

#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T item;

public:
    void setItem(T value) {
        item = value;
    }

    T getItem() {
        return item;
    }
};

int main() {
    Box<int> intBox;
    intBox.setItem(9);
    cout << "Item in intBox: " << intBox.getItem() << endl;

    Box<string> stringBox;
    stringBox.setItem("Hello, world!");
    cout << "Item in stringBox: " << stringBox.getItem() << endl;

    return 0;
}
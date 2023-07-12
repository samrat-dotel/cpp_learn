/* WAP to implement class template using multiple template parameters. */

#include <iostream>
using namespace std;

template<typename T, typename U>
class Pair {
private:
    T first;
    U second;

public:
    Pair(const T& f, const U& s) : first(f), second(s) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> pair1(10, 3.14);
    pair1.display();

    Pair<string, bool> pair2("Hello", true);
    pair2.display();

    return 0;
}
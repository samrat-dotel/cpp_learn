/* WAP to overload template function. */

#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    cout << "Using template function" << endl;
    return a + b;
}

template <class T1, class T2>
T1 add(T1 a, T2 b) {
    cout << "Using overloaded template function" << endl;
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 4, float2 = 8;

    cout << "Sum of integers using template function: " << add(int1, int2) << endl;
    cout << "Sum of floats using overloaded template function: " << add(float1, float2) << endl;

    return 0;
}
/* WAP to add two integers and two float values using function template. */

#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 2.5, float2 = 3.7;

    int sum_int = add(int1, int2);
    float sum_float = add(float1, float2);

    cout << "Sum of integers: " << sum_int << endl;
    cout << "Sum of floats: " << sum_float << endl;

    return 0;
}
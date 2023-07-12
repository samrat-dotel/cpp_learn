/* WAP to overload template function using ordinary function. */

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    cout << "Using template function" << endl;
    return a + b;
}

template <typename T1, typename T2>
T2 add(T1 a, T2 b){
	cout<<"Using my function"<< endl;
	return a + b;
}

int add(int a, int b) {
    cout << "Using ordinary function" << endl;
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 2.5, float2 = 3.7;

    cout << "Sum of integers using second template function: " << add<int, float>(int1, float2) << endl;
    cout << "Sum of floats using first template function: " << add(float1, float2) << endl;
    cout << "Sum of integers using ordinary function: " << add(int1, int2) << endl;

    return 0;
}
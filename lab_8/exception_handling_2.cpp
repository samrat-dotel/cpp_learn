/* WAP to illustrate exception handling (single exception). */

#include <iostream>
using namespace std;

int divideNumbers(int dividend, int divisor) {
    if (divisor == 0) {
        throw "Divisor cannot be zero.";
    }
    return dividend / divisor;
}

int main() {
    int dividend, divisor;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    try {
        int result = divideNumbers(dividend, divisor);
        cout << "Result of division: " << result << endl;
    } catch (const char* exception) {
        cout << "Error: " << exception << endl;
    }
    return 0;
}
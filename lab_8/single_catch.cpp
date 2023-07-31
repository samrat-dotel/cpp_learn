/* WAP to illustrate multiple exception using single catch statement. */

#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (b == 0) {
            throw "Cannot divide by zero or use zero as the divisor.";
        }

        if (a < 0 || b <= 0) {
            throw "Cannot take a negative number.";
        }

        double result = static_cast<double>(a) / b;
        cout << "Result of division: " << result << endl;
    } catch (const char* exception) {
        cout << "Error: " << exception << endl;
    }

    return 0;
}
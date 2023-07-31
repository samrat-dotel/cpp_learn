#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter two integers: ";

    try {
        // Input first integer
        cin >> num1;

        // Check for invalid input
        if (cin.fail()) {
            throw runtime_error("Invalid input for the first integer.");
        }

        cin >> num2;

        if (cin.fail()) {
            throw runtime_error("Invalid input for the second integer.");
        }

        if (num2 == 0) {
            throw logic_error("Division by zero is not allowed.");
        }

        if (num1 < 0){
            throw logic_error("Dividend cannot be negative.");
        }

        float result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const logic_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (float num1){ 
        cout<<"The dividend cannot be negative: " << endl;
    }
    catch (...) {
        cout << "Unknown error occurred." << endl;
    }

    return 0;
}

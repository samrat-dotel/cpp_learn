#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    void convertToFeet(double meters) {
        double feetValue = meters * 3.280833;

        feet = static_cast<int>(feetValue);
        inches = static_cast<int>((feetValue - feet) * 12);

        cout << "Conversion: " << meters << " meters = " << feet << " feet " << inches << " inches" << std::endl;
    }
};

int main() {
    Distance dist;
    double meters;
    cout<<"Enter the distance in meter:";
    cin>>meters;
    dist.convertToFeet(meters);

    return 0;
}

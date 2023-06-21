#include<iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    Distance operator+(const Distance& other) const {
        int totalMeters = meters + other.meters;
        int totalCentimeters = centimeters + other.centimeters;

        if (totalCentimeters >= 100) {
            totalMeters += totalCentimeters / 100;
            totalCentimeters = totalCentimeters % 100;
        }

        return Distance(totalMeters, totalCentimeters);
    }

    void display() const {
        cout << "Total distance: " << meters << " meters, " << centimeters << " centimeters" << std::endl;
    }
};

int main() {
    Distance d1(2, 50);
    Distance d2(1, 75);

    Distance sum = d1 + d2; 

    sum.display(); 

    return 0;
}

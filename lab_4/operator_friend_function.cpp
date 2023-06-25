#include<iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

public:
    Distance(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    friend Distance operator+(const Distance& d1, const Distance& d2);

    void display() const {
        cout << "Total distance: " << meters << " meters, " << centimeters << " centimeters" << endl;
    }
};

Distance operator+(const Distance& d1, const Distance& d2) {
    int totalMeters = d1.meters + d2.meters;
    int totalCentimeters = d1.centimeters + d2.centimeters;

    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters = totalCentimeters % 100;
    }

    return Distance(totalMeters, totalCentimeters);
}

int main() {
    Distance d1(2, 50);
    Distance d2(1, 75);

    Distance sum = d1 + d2;

    sum.display();

    return 0;
}

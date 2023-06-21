#include <iostream>
using namespace std;

class Distance1 {
private:
    int feet;
    int inch;

public:
    Distance1(int ft = 0, int in = 0) : feet(ft), inch(in) {}

    int getFeet() const {
        return feet;
    }

    int getInch() const {
        return inch;
    }
};

class Distance2 {
private:
    int meter;
    int centimeter;

public:
    Distance2(int m = 0, int cm = 0) : meter(m), centimeter(cm) {}

    void convertFromDistance1(const Distance1& d1) {
        double totalInches = d1.getFeet() * 12 + d1.getInch();
        double meters = totalInches / 39.37;

        meter = static_cast<int>(meters);
        centimeter = static_cast<int>((meters - meter) * 100);
    }

    void display() const {
        cout << "Conversion: " << meter << " meters " << centimeter << " centimeters" << std::endl;
    }
};

int main() {
    Distance1 dist1(5, 9);

    Distance2 dist2;
    dist2.convertFromDistance1(dist1);
    dist2.display();

    return 0;
}

#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    void convertToMeter() {
        double totalInches = feet * 12 + inches;
        double meters = totalInches * 0.0254;

        std::cout << "Conversion: " << feet << " feet " << inches << " inches = " << meters << " meters" << std::endl;
    }
};

int main() {
    Distance dist(5, 9);
    dist.convertToMeter();

    return 0;
}

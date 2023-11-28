#include <iostream>

using namespace std;

double convert_gallons_to_cubic_feet(double gallons) {
    return gallons / 7.418;
}

int main() {
    double gallons;

    cout << "Enter a number of gallons: ";
    cin >> gallons;

    double cubic_feet = convert_gallons_to_cubic_feet(gallons);

    cout << "The equivalent in cubic feet is: " << cubic_feet << endl;

    return 0;
}
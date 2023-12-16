#include <iostream>
using namespace std;

const double USD_TO_INR = 75.0; // Conversion rate: 1 USD = 75.0 INR

// Function to convert US dollars to Indian Rupees
double dollarsToINR(double dollars) {
    return dollars * USD_TO_INR;
}

// Function to convert Indian Rupees to US dollars
double inrToDollars(double inr) {
    return inr / USD_TO_INR;
}

int main() {
    double amount;
    char choice;

    cout << "Welcome to Currency Converter\n";
    cout << "-----------------------------\n";

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Select conversion:\n";
    cout << "d - US dollars to INR\n";
    cout << "i - INR to US dollars\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 'd':
        case 'D':
            cout << amount << " US dollars = " << dollarsToINR(amount) << " INR\n";
            break;
        case 'i':
        case 'I':
            cout << amount << " INR = " << inrToDollars(amount) << " US dollars\n";
            break;
        default:
            cout << "Invalid choice. Please enter 'd' or 'i'.\n";
            break;
    }

    return 0;
}

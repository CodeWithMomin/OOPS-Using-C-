#include <iostream>
using namespace std;
void generate_numbers(int start, int end, int step) {
    for (int current_number = start; current_number >= start && current_number <= end; current_number -= step) {
        cout << current_number <<endl;
    }
}

int main() {
    int start = 10;
    int end = 20;
    int step = 1;

    generate_numbers(start, end, step);

    return 0;
}
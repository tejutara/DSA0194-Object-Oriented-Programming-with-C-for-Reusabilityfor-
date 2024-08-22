#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative number. No real square root.\n";
    } else {
        double sqrt_num = sqrt(num);
        cout << "Square root: " << sqrt_num << std::endl;
    }

    return 0;
}


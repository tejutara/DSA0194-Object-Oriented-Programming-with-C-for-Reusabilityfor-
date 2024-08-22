#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;

    double cbrt_num = cbrt(num);

    if (num < 0) {
        cout << "Cube root of a negative number is: " << cbrt_num << std::endl;
    } else {
        cout << "Cube root is: " << cbrt_num << std::endl;
    }

    return 0;
}


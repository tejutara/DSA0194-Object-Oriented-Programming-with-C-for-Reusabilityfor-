#include <iostream>

int main() {
    int n, sum = 0, i = 1;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Calculate the sum using a while loop
    while (i <= n) {
        sum += i;
        i++;
    }

    std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;

    return 0;
}


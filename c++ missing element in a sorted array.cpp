#include <iostream>
using namespace std;
int main() {
    int arr[] = {0, 11, 2, 3, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missing = 0;

    int i = 0;
    while (i < size && arr[i] == missing) {
        missing++;
        i++;
    }

    cout << "The smallest missing element is: " << missing << std::endl;

    return 0;
}


#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        // If any element is less than its predecessor, the array is not sorted
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    // If the loop completes without returning false, the array is sorted
    return true;
}

int main() {
    // Example array
    int myArray[] = {1, 2, 3, 4, 5};

    // Get the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Check if the array is sorted
    if (isSorted(myArray, size)) {
        cout << "The array is sorted in ascending order.\n";
    } else {
        cout << "The array is not sorted in ascending order.\n";
    }

    return 0;
}
 
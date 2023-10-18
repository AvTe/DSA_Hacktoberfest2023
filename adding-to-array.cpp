#include <iostream>

int main() {
    const int arraySize = 5;
    int myArray[arraySize] = {1, 2, 3, 4, 5};

    // To add a new element, you can overwrite an existing one.
    myArray[2] = 42; // Replaces the element at index 2 with 42.

    // Or you can shift elements to create space for a new value.
    for (int i = arraySize - 1; i > 0; i--) {
        myArray[i] = myArray[i - 1];
    }
    myArray[0] = 10; // Adds 10 at the beginning by shifting elements.

    // Display the modified array.
    for (int i = 0; i < arraySize; i++) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}

#include <iostream>

int main() {
    int number = 10;  // Declare an integer variable
    int* pointer;    // Declare a pointer variable of type int*

    pointer = &number;  // Assign the address of 'number' to the pointer

    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number: " << &number << std::endl;
    std::cout << "Value stored in pointer: " << *pointer << std::endl;
    std::cout << "Address stored in pointer: " << pointer << std::endl;

    *pointer = 20;  // Update the value of 'number' indirectly through the pointer

    std::cout << "New value of number: " << number << std::endl;

    return 0;
}


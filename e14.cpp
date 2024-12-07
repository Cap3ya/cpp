// Exercise 1.4: 
// Our program used the addition operator, +, to
// add two numbers. Write a program that uses the
// multiplication operator, *, to print the product instead.

#include <iostream>

int main() {
    std::cout << "Enter two numbers" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2; 
    std::cout << "The product of " << n1 << " and " << n2 << " is " << n1 * n2 << std::endl;   
    return 0; 
}
/*
    Exercises Section 1.4.3
*/

#include <iostream>

/*
    Exercise 1.16: 
    Write your own version of a program that
    prints the sum of a set of integers read from cin.
*/

int e116() {

    std::cout << "Sum the numbers: " << std::endl;

    int sum = 0, value = 0;
    while (std::cin >> value)
    {
        sum += value; 
    }
    
    std::cout << "The sum is " << sum << std::endl; 
    
    return 0; 
}

int main() {
    std::cout << "Exercise 1.16:" << std::endl;
    e116();
}
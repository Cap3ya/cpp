/*
    Exercises Section 1.4.2
*/

#include <iostream>

/*
    Exercise 1.12: What does the following for loop do? What
    is the final value of sum?
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;
*/

int e112() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;

    std::cout << "The sum from -100 to 100 is " << sum << std::endl; 
    
    return 0; 
}

/*
    Exercise 1.13: Rewrite the first two exercises from § 1.4.1
    (p. 13) using for loops.
*/

int e113() {
    // Use a for loop to sum the numbers from 50 to 100.
    int sum = 0; 
    for (size_t i = 50; i <= 100; i++)
        sum += i;
    
    std::cout << "The sum from 50 to 100 is " << sum << std::endl; 

    // Use a for loop to print the numbers from ten down to zero.
    for (int i = 10; i >= 0; i--)
        std::cout << "print the numbers from ten down to zero: " << i << std::endl; 

    return 0; 
}

/*
    Exercise 1.14: Compare and contrast the loops that used a
    for with those using a while. Are there advantages or
    disadvantages to using either form?
*/

/*
    Exercise 1.15: Write programs that contain the common
    errors discussed in the box on page 16. Familiarize yourself
    with the messages the compiler generates.
*/

int main() {
    std::cout << "Exercise 1.12:" << std::endl;
    e112();
    std::cout << "Exercise 1.13:" << std::endl;
    e113();
    std::cout << "Exercise 1.14:" << std::endl;
}
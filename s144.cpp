/*
    Exercises Section 1.4.4
*/

#include <iostream>

/*
    Exercise 1.17: 
    What happens in the program presented in
    this section if the input values are all equal? What if there
    are no duplicated values?
*/

int e117() {

    std::cout << "Sum the numbers: " << std::endl;

    int sum = 0, value = 0;
    while (std::cin >> value)
    {
        sum += value; 
    }
    
    std::cout << "The sum is " << sum << std::endl; 
    
    return 0; 
}

/*
    Exercise 1.18: 
    Compile and run the program from this
    section giving it only equal values as input. Run it again
    giving it values in which no number is repeated.
*/
/*
    Exercise 1.19: 
    Revise the program you wrote for the
    exercises in § 1.4.1 (p. 13) that printed a range of numbers so
    that it handles input in which the first number is smaller
    than the second.
*/

int main() {
    std::cout << "Exercise 1.16:" << std::endl;
    e116();
}
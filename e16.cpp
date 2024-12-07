/*
    Exercise 1.6: Explain whether the following program
    fragment is legal.
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << v1 + v2 << std::endl;
    If the program is legal, what does it do? If the program is not
    legal, why not? How would you fix it?

    e16.cpp: In function ‘int main()’:
    e16.cpp:15:5: error: expected primary-expression before ‘<<’ token
    15 |     << " and " << v2;
        |     ^~
    e16.cpp:16:5: error: expected primary-expression before ‘<<’ token
    16 |     << " is " << v1 + v2 << std::endl;
        |     ^~
*/

#include <iostream>

int main() {
    int v1 = 0, v2 = 1; 

    std::cout << "The sum of "; 
    std::cout << v1;
    std::cout << " and "; 
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;

    return 0; 
}
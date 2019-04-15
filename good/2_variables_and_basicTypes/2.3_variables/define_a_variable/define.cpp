#include <iostream>
int main( ) {
    int a = 10; // An integer
    int* b = &a; // A pointer to an integer
    std::cout << *b << std::endl;
    int** c = &b; // A pointer to a pointer to an integer
    std::cout << **c << std::endl;

    int d[ 3 ] = { 2, 8, 7 }; // An array of 10 integers
    std::cout << d[ 0 ] << " " << d[ 1 ] << " " << d[ 2 ] << std::endl;
    int* e[ 10 ]; // An array of 10 pointers to integers
    e[ 1 ] = &a;
    std::cout << *b << std::endl;

    int d1[ 4 ] = { 2, 8, 7 }; // An array of 10 integers
    // error
    //int ( *f )[ 3 ]; // 3 is not 4
    int ( *f )[ 4 ]; // A pointer to an array of 10 integers
    f = &d1;

    int ( *g )( int ); // A pointer to a function a that takes an integer argument and returns an integer
    int ( *h[ 10 ] )( int ); // An array of 10 pointers to functions that take an integer argument and return an integer
    return 0;
}

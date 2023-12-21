#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    signed char firstArray [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15, 16, 17, 18 };
    short int secondArray [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15, 16, 17, 18 };
    int thirdArray [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15, 16, 17, 18 };
    long int fourthArray [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15, 16, 17, 18 };
    long long int fifthArray [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12, 13, 14, 15, 16, 17, 18 };

    cout << sizeof(firstArray) << "\n";
    cout << sizeof(secondArray) << "\n";
    cout << sizeof(thirdArray) << "\n";
    cout << sizeof(fourthArray) << "\n";
    cout << sizeof(fifthArray) << "\n";

    char myName [] = "Caio Weber Stuart";

    cout << sizeof(myName) << "\n";
    
    return 0;
}
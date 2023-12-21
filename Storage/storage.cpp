#include <iostream>
using namespace std;

int sum();

int main()
{
    auto number = 0;

    for(int i = 0; i <= 10; i++){
        number = i;

        //cout << &number << number << endl;
    }

    register string carrerLevel = "Junior Programmer";
    
    // cout << &carrerLevel << carrerLevel << endl;

    carrerLevel = "Senior Programmer";

    // cout << &carrerLevel << carrerLevel << endl;

    sum();
    sum();
    sum();
    sum();
    sum();
    sum();
    sum();

    return 0;
}

int sum()
{
    static int currentNumber = 0;
    currentNumber++;

    cout << &currentNumber << currentNumber << endl;
}
#include <iostream>
using namespace std;

string newName(string *name, string value);
int sumAge(int *age, int value);

int main()
{
    string myName;
    string *pointerToMyName = &myName;
    newName(&myName, "Caio Weber Stuart");

    cout << sizeof(myName) << &myName << myName << endl;
    cout << sizeof(*pointerToMyName) << pointerToMyName << *pointerToMyName << endl;

    string listMonths[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string insertedMonths[12];
    string *pointerToMonths;

    for(int i = 0; i < 12; i++){
        pointerToMonths = &insertedMonths[i];
        *pointerToMonths = listMonths[i];

        cout << insertedMonths[i] << endl; 
    }

    int age = 0;
    sumAge(&age, 10);
    
    cout << age << endl;

    return 0;
}

string newName(string *name, string value)
{
    return *name = value;
}

int sumAge(int *age, int value){
    return *age += value;
}
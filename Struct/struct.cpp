#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    struct Person{
        char name[50];
        int age;
        char work[33];
    };

    struct Person firstPerson;

    strcpy(firstPerson.name, "Caio Weber Stuart");
    firstPerson.age = 17;
    strcpy(firstPerson.work, "Programming");

    cout << "Nome: " << firstPerson.name << "; Age: " << firstPerson.age << "; Work: " << firstPerson.work << "\n";
    cout << sizeof(firstPerson.name) << " " << sizeof(firstPerson.age) << " " << sizeof(firstPerson.work) << " " << "\n";


    return 0;
}
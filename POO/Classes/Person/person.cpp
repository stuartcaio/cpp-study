#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "../Animal/animal.cpp"
using namespace std;

class Person : public Animal{
    string eyeColor;
    string hairColor;
    string profission;
    string maritalStatus;

    public:
        Person(string name, string specie, string color, string birthplace, int size, int age, string eyeColor, string hairColor, string profission, string maritalStatus)
        : Animal(name, specie, color, birthplace, size, age){
            this->eyeColor = eyeColor;
            this->hairColor = hairColor;
            this->profission = profission;
            this->maritalStatus = maritalStatus;
        }

    void personInfos(){
        this->animalInfos(); 

        cout << "Eye color: " << eyeColor << endl;
        cout << "Hair color: " << hairColor << endl;
        cout << "Profission: " << profission << endl;
        cout << "Marital Status: " << maritalStatus << endl;
    }
};

#endif
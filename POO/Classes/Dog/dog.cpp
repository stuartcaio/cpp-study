#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "../Animal/animal.cpp"
using namespace std;

class Dog : public Animal{
    string eyeColor;
    string race;

    public:
        Dog(string name, string specie, string color, string birthplace, int size, int age, string eyeColor, string race)
        : Animal(name, specie, color, birthplace, size, age){
            this->eyeColor = eyeColor;
            this->race = race;
        }

    void infosDog(){
        this->animalInfos();

        cout << "Eye color: " << this->eyeColor << endl;
        cout << "Race: " << this->race << endl;
    }
};

#endif
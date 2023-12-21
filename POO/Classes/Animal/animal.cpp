#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <array>
using namespace std;

class Animal{
    string specie;
    string color;
    string birthplace;
    string name;
    int size;
    int age;

    public:
        Animal(string name, string specie, string color, string birthplace, int size, int age){
            this->name = name;
            this->specie = specie;
            this->color = color;
            this->birthplace = birthplace;
            this->size = size;
            this->age = age;
        }

    void animalInfos(){
        cout << "Specie: " << this->specie << endl;
        cout << "Color: " << this->color << endl;
        cout << "Size: " << this->size << endl;
        cout << "Age: " << this->age << endl;
        cout << "Birthplace: " << this->birthplace << endl;
    }
};

#endif
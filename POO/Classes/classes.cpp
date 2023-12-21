#include <iostream>
#include "./Animal/animal.cpp"
#include "./Person/person.cpp"
#include "./Dog/dog.cpp"
using namespace std;

int main()
{
    // Person caio("Caio", "person", "white", "14/02/2006", 60, 8, "brown", "black", "programming", "dating");
    // caio.personInfos();

    Dog tobby("Tobby", "dog", "white", "06/01/2020", 60, 8, "brown", "shitzu");
    tobby.infosDog();

    return 0;
}
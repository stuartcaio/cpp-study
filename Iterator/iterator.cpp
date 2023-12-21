#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<string> students = {"Caio", "Malu", "Pedro", "Vini", "Matheus", "Lucas"};
    vector<string>::iterator it;
    it = students.begin();

    for(int i = 0; i < 6; i++){
        cout << *next(it, i) << endl;
    }

    return 0;
}
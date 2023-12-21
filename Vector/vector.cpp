#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    for(int i = 0; i <= 7; i++){
        numbers.push_back(i);
    }

    for(auto i = numbers.begin(); i != numbers.end(); i++){
        cout << *i << endl;
    }

    return 0;
}
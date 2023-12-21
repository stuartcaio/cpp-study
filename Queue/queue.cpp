#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <string> languages;

    languages.push("Assembly");
    languages.push("C");
    languages.push("C++");
    languages.push("C#");
    languages.push("Java");
    languages.push("PHP");
    languages.push("Python");
    languages.push("Javascript");

    while(!languages.empty()){
        string currentLanguage = languages.front();

        cout << currentLanguage << endl;

        languages.pop();
    }

    return 0;
}
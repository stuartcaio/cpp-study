#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> languages;

    languages.push("Assembly");
    languages.push("C");
    languages.push("C++");
    languages.push("C#");
    languages.push("Java");
    languages.push("PHP");
    languages.push("Python");
    languages.push("Javascript");

    while(!languages.empty()){
        string currentLanguage = languages.top();
        
        cout << currentLanguage << endl;

        languages.pop();
    }

    return 0;
}
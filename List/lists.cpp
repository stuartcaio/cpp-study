#include <iostream>
#include <list>
using namespace std;

int main()
{
    const int languagesSize = 7;
    list<string> languages;

    languages.push_front("Assembly");
    languages.push_front("C");
    languages.push_front("C++");
    languages.push_front("C#");
    languages.push_front("Java");
    languages.push_front("PHP");
    languages.push_front("Python");
    languages.push_front("Javascript");
    
    for(int currentLanguage = 0; currentLanguage < languagesSize; currentLanguage++){
        cout << languages.back() << endl;

        languages.pop_back();
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int languagesSize = 7;
    string languages[languagesSize];

    for(int currentLanguage = 0; currentLanguage < languagesSize; currentLanguage++){
        string insertedLanguage;

        cout << "Insert a language which you learned: ";
        getline(cin, insertedLanguage);

        languages[currentLanguage] = insertedLanguage;
    }

    for(int currentLanguage = 0; currentLanguage <= languagesSize; currentLanguage++){
        cout << languages[currentLanguage] << endl;
    }

    return 0;
}
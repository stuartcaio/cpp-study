#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int languagesSize = 7;
    string languages[languagesSize];

    for(int currentLanguage = languagesSize - 1; currentLanguage >= 0; currentLanguage--){
        string insertedLanguage;
        
        cout << "Insert a language which you learned: ";

        getline(cin, insertedLanguage);

        languages[currentLanguage] = insertedLanguage;
    }

    for(int i = 0; i <= 7; i++){
        cout << languages[i] << endl;
    }

    return 0;
}
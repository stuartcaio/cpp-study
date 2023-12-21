#include <iostream>
using namespace std;

int main()
{
    string originalLanguages[8] = {"Assembly", "C", "C++", "C#", "PHP", "Python", "Javascript"};
    string languages[8];

    languages[2] = "PHP";

    for(int currentLanguage = 0; currentLanguage < originalLanguages->length() - 1; currentLanguage++){
        languages[currentLanguage] = originalLanguages[currentLanguage];
        cout << languages[currentLanguage] << endl;
    }

    return 0;
}
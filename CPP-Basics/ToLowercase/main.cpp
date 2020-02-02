#include <iostream>
#include <string.h>

using namespace std;

char *toLowercase(char* sentence)
{
    size_t textLength = strlen(sentence);
    for (unsigned int i = 0; i < textLength; i++) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            sentence[i] = sentence[i] + ('a' - 'A');
        }
    }

    return sentence;
}

int main()
{
    char sentence[1000];

    cout << "Enter sentence:" << endl;
    cin.getline(sentence, 1000);

    cout << toLowercase(sentence) << endl;

    return 0;
}

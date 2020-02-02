#include <iostream>
#include <string.h>

using namespace std;

void toUppercase(char* sentence)
{
    size_t textLength = strlen(sentence);
    for (unsigned int i = 0; i < textLength; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - ('a' - 'A');
        }
    }
}

int main()
{
    char sentence[1000];

    cout << "Enter sentence:" << endl;
    cin.getline(sentence, 1000);

    toUppercase(sentence);
    cout << sentence << endl;

    return 0;
}

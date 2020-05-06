#include <iostream>
#include <string.h>

using namespace std;

const int MAX_LENGTH = 1000;

char *toUppercase(char* sentence) {
    size_t textLength = strlen(sentence);
    for (unsigned int i = 0; i < textLength; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            sentence[i] = sentence[i] - ('a' - 'A');
        }
    }

    return sentence;
}

int main() {
    char sentence[MAX_LENGTH];

    cout << "Enter sentence:" << endl;
    cin.getline(sentence, MAX_LENGTH);

    cout << toUppercase(sentence) << endl;

    return 0;
}

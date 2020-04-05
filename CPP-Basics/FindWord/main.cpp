#include <iostream>
#include <limits>
#include <cstring>

using namespace std;

const short int MAX_LENGTH = 1000;

int findWord(char* word, const char* text)
{
    int index = -1;
    size_t wordLength = strlen(word);
    size_t textLength = strlen(text);

    if (wordLength > textLength) {
        return index;
    }

    for (unsigned int i = 0; i <= textLength - wordLength; i++) {
        index = i;
		
        for (unsigned int j = 0; j < wordLength; j ++) {
            if (text[j + i] != word[j]) {
                index = -1;
                break;
            }
        }
		
        if (index != -1) {
            return index;
        }
    }

    return index;
}

int main()
{
    char text[MAX_LENGTH + 1];
    char word[MAX_LENGTH + 1];

    int index;

    cout << "Enter text to work with:" << endl;
    cin.getline(text, MAX_LENGTH);
    cout << "Enter word to search for:" << endl;
    cin.getline(word, MAX_LENGTH);

    index = findWord(word, text);

    if (index != -1) {
        cout << "The text contains: " << word << "\nThe index where the found word begins is: " << index << endl;
    } else {
        cout << "The text does not contain: " << word << endl;
    }

    return 0;
}

#include <iostream>
#include <cstring>
#include <limits>

using namespace std;

const short int MAX_LENGTH = 1000;

void addSentence(int position, char* sentence, char* text, char* newText) {
    size_t textLength = strlen(text);
    size_t sentenceLength = strlen(sentence);
    int newIndex = 0;

    for (unsigned int i = 0; i <= textLength; i++) {
        if ((int)i == position) {
            for (unsigned int j = 0; j < sentenceLength; j++) {
                newText[newIndex++] = sentence[j];
            }
        }
        newText[newIndex++] = text[i];
    }
    newText[textLength + sentenceLength] = '\0';
}

int main() {
    char text[MAX_LENGTH];
    char newText[MAX_LENGTH * 2];
    char sentence[MAX_LENGTH];
    unsigned int position;

    cout << "Enter text:" << endl;
    cin.getline(text, MAX_LENGTH);

    cout << "Enter position and sentence to add:" << endl;
    cin >> position;
    cin.ignore(1, '\n');
    cin.getline(sentence, MAX_LENGTH);
    while(cin.fail() || position < 0 || position > strlen(text)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input." << endl;
        cout << "Enter position and sentence to add:" << endl;
        cin >> position;
        cin.ignore(1, '\n');
        cin.getline(sentence, MAX_LENGTH);
    }
    addSentence(position, sentence, text, newText);
    strcpy(text, newText);
    cout << text << endl;

    return 0;
}

#include <iostream>

using namespace std;

int counter = 0;

void PrintText(string text) {
    cout << counter << endl;
    counter++;
    cout << text << endl;
    while(counter < 10) {
        PrintText("recursion");
    }
}

int main()
{
    PrintText("Hello world!");
    string str = "Hello world!";
    size_t len = str.length();
    return 0;
}

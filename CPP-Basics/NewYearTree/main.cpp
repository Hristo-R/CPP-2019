#include <iostream>

using namespace std;

int main()
{
    int n;
    int spacesCount;
    string asterisks;
    string spaces;

    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int asterisksCount = i;
		
        for (int j = 0; j <= asterisksCount; j++) {
            asterisks += '*';
        }

        spacesCount = n - asterisksCount;

        for (int j = 0; j <= spacesCount; j++) {
            spaces += ' ';
        }

        cout << spaces;
        cout << asterisks;
        cout << " | ";
        cout << asterisks;
        cout << spaces;
        cout << "\n";

        spaces = "";
        asterisks = "";
    }

    return 0;
}

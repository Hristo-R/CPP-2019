#include <iostream>

using namespace std;

int main() {
        cout << "ASCII Table\n";
        cout << "decimal\tchar\n";
        for (int i = 0; i < 255; i++) {
            char DecimalToChar = (char)i;
            cout << i << "\t" << DecimalToChar << endl;
        }

    return 0;
}

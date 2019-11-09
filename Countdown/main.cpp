#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    unsigned short int time;
    cout << "Please input a integer in range [1, 65535]" << endl;

    while (!(cin >> time) || (time < 1) || (time > 65535)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input\n";
        cout << "Please input a integer in range [1, 65535]" << endl;
    }

    int hour = time / 3600;
    int minute = (time % 3600) / 60;
    int second = time % 60;

    cout << hour << ":" << minute << ":" << second << endl;

    for (int h = hour; h >= 0; h--) {
        for (int m = minute; m >= 0; m--) {
            for (int s = second; s >= 0; s--) {
                system("cls");
                cout << h << ":" << m << ":" << s << endl;
                Sleep(1000); //Sleep for 1 Sec 1000ms = 1sec
            }
            second = 59;
        }
        minute = 59;
    }

    return 0;
}

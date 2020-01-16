#include <iostream>

using namespace std;

int main()
{
    int days;
    cout << "Please input days in range [0, 1000000]" << endl;

    while(!(cin >> days) || (days < 0) || (days > 1000000)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input\n";
        cout << "Please input days in range [0, 1000000]" << endl;
    }

    int year = 0;
    int leapYearCounter = 0;
    for (int i = 1; i <= days; i += 365) {
        year++;
        leapYearCounter++;
        if (leapYearCounter == 4) {
            i++;
            leapYearCounter = 0;
        }
    }

    cout << "The year is: " << year << endl;

    return 0;
}

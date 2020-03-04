#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c;
    double y1, y2;
    double x1, x2, x3, x4;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    double D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "no real roots" << endl;
        return 0;
    } else if (D == 0) {
        y1 = y2 = -1 * (b / (2 * a));
        cout << "y1 = y2 = " << y1;
    } else {
        y1 = ((-1 * b) + sqrt(D)) / (2 * a);
        y2 = ((-1 * b) - sqrt(D)) / (2 * a);
        cout << "y1 = " << y1 << endl;
        cout << "y2 = " << y2 << endl;
    }

    if (y1 < 0 && y2 < 0) {
        cout << "no real roots";
    } else if (y1 >= 0 && y2 >= 0) {
        cout << "x1 = " << sqrt(y1) << endl;
        cout << "x2 = " << -sqrt(y1) << endl;
        cout << "x3 = " << sqrt(y2) << endl;
        cout << "x4 = " << -sqrt(y2) << endl;
    } else if (y1 >= 0 && y2 < 0) {
        cout << "x1 = " << sqrt(y1) << endl;
        cout << "x2 = " << -sqrt(y1) << endl;
    } else if (y1 < 0 && y2 >= 0) {
        cout << "x1 = " << sqrt(y2) << endl;
        cout << "x2 = " << -sqrt(y2) << endl;
    }

    return 0;
}

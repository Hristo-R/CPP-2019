#include <iostream>
#include <limits>

using namespace std;

int CharToDecimalValue(char hexValueChar) {
    switch(hexValueChar) {
        case '0': return 0;
            break;
        case '1': return 1;
            break;
        case '2': return 2;
            break;
        case '3': return 3;
            break;
        case '4': return 4;
            break;
        case '5': return 5;
            break;
        case '6': return 6;
            break;
        case '7': return 7;
            break;
        case '8': return 8;
            break;
        case '9': return 9;
            break;
        case 'A': return 10;
            break;
        case 'B': return 11;
            break;
        case 'C': return 12;
            break;
        case 'D': return 13;
            break;
        case 'E': return 14;
            break;
        case 'F': return 15;
            break;
        default: return -1;
    }
}

int main() {
    char arithmeticOperator;
    char hexValueChar1;
    char hexValueChar2;
    int decValue1;
    int decValue2;
    int decResult;

    cout << "Input a arithmetic operator (+, -, *, / or %)" << endl;
    cin >> arithmeticOperator;
    while(cin.fail() || !(arithmeticOperator == '+' || arithmeticOperator == '-' || arithmeticOperator == '*' || arithmeticOperator == '/' || arithmeticOperator == '%')) {
        cin.clear(); //Clear errors flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore rest of the line.
        cout << "Invalid input\n";
        cout << "Input a arithmetic operator (+, -, *, / or %)" << endl;
        cin >> arithmeticOperator;
    }

    cout << "Input first positive single-digit hexadecimal number" << endl;
    cin >> hexValueChar1;
    while(cin.fail() || !(hexValueChar1 == '1' || hexValueChar1 == '2' || hexValueChar1 == '3' || hexValueChar1 == '4' || hexValueChar1 == '5' || hexValueChar1 == '6' || hexValueChar1 == '7' || hexValueChar1 == '8' || hexValueChar1 == '9' || hexValueChar1 == 'A' || hexValueChar1 == 'B' || hexValueChar1 == 'C' || hexValueChar1 == 'D' || hexValueChar1 == 'E' || hexValueChar1 == 'F')) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input\n";
        cout << "Input first positive single-digit hexadecimal number" << endl;
        cin >> hexValueChar1;
    }

    cout << "Input second positive single-digit hexadecimal number" << endl;
    cin >> hexValueChar2;
    while(cin.fail() || !(hexValueChar2 == '1' || hexValueChar2 == '2' || hexValueChar2 == '3' || hexValueChar2 == '4' || hexValueChar2 == '5' || hexValueChar2 == '6' || hexValueChar2 == '7' || hexValueChar2 == '8' || hexValueChar2 == '9' || hexValueChar2 == 'A' || hexValueChar2 == 'B' || hexValueChar2 == 'C' || hexValueChar2 == 'D' || hexValueChar2 == 'E' || hexValueChar2 == 'F')) {
        cin.clear(); //Clear errors flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore rest of the line.
        cout << "Invalid input\n";
        cout << "Input second positive single-digit hexadecimal number" << endl;
        cin >> hexValueChar2;
    }

    decValue1 = CharToDecimalValue(hexValueChar1);
    if (decValue1 == -1) {
        cout << "Invalid first hexadecimal number input\n";
        return 0;
    }

    decValue2 = CharToDecimalValue(hexValueChar2);
    if (decValue2 == -1) {
        cout << "Invalid second hexadecimal number input\n";
        return 0;
    }

    switch (arithmeticOperator) {
        case '+':
            decResult = decValue1 + decValue2;
            cout << decResult << endl;
            break;
        case '-':
            decResult = decValue1 - decValue2;
            cout << decResult << endl;
            break;
        case '*':
            decResult = decValue1 * decValue2;
            cout << decResult << endl;
            break;
        case '/':
            decResult = decValue1 / decValue2;
            cout << decResult << endl;
            break;
        case '%':
            decResult = decValue1 % decValue2;
            cout << decResult << endl;
            break;
        default:
            cout << "Invalid arithmetic operator input\n";
    }

    int remainder;
    char secondChar = ' ';

    remainder = decResult % 16;
    if (remainder > 9){
        switch (remainder){
            case 10: secondChar = 'A'; break;
            case 11: secondChar = 'B'; break;
            case 12: secondChar = 'C'; break;
            case 13: secondChar = 'D'; break;
            case 14: secondChar = 'E'; break;
            case 15: secondChar = 'F'; break;
        }
    } else {
         secondChar = char(remainder + 48);
    }

    decResult = decResult / 16;
    remainder = decResult % 16;

    if (remainder > 9){
        switch (remainder){
            case 10: cout << 'A'; break;
            case 11: cout << 'B'; break;
            case 12: cout << 'C'; break;
            case 13: cout << 'D'; break;
            case 14: cout << 'E'; break;
            case 15: cout << 'F'; break;
        }
    } else {
        if (char(remainder + 48) != '0'){
            cout << char(remainder + 48);
        }
    }

    cout << secondChar;

    return 0;
}

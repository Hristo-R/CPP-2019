#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int matrix[n][n] = {
        {9, 5, 2, 4, 3},
        {2, 8, 1, 0, 8},
        {8, 5, 3, 0, 6},
        {7, 9, 8, 4, 2},
        {1, 9, 8, 2, 6}
    };

    int row;
    int col;
    int nextRow;
    int temp;

    cout << "The input matrix is: " << endl;
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    // Sorting the rows from first columns
    col = 0;
    for (row = 0; row < n; row++) {
        for (nextRow = (row + 1); nextRow < n; nextRow++) {
            if (matrix[row][col] < matrix[nextRow][col]) {
                for (int i = 0; i < n; i++) {
                    temp = matrix[row][i];
                    matrix[row][i] = matrix[nextRow][i];
                    matrix[nextRow][i] = temp;
                }
            }
        }
    }

    cout << "Sorted from first column in descending order: " << endl;
    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << "\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

void sortingArrayAscending(int *arr, int sizeArr) {
    int temp;
    for (int i = 0; i < sizeArr; i++) {
        for (int j = i + 1; j < sizeArr; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortingArrayDescending(int *arr, int sizeArr) {
    int temp;
    for (int i = 0; i < sizeArr; i++) {
        for (int j = i + 1; j < sizeArr; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printingArray(int *arr, int sizeArr)
{
    for (int i = 0; i < sizeArr; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Input array size: " << endl;
    cin >> n;

    int arr[n];
    cout << "Input elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortingArrayAscending(arr, n);
    cout << "Sorted array as ascending order:" << endl;
    printingArray(arr, n);

    sortingArrayDescending(arr, n);
    cout << "Sorted array as descending order:" << endl;
    printingArray(arr, n);

    return 0;
}

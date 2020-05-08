#include <iostream>

using namespace std;

void ChangeArray (double arr[][5]) {
    for(size_t row = 0; row < 3; row++) {
        for(size_t col= 0; col< 5; col++) {
            arr[row][col]++;
        }
    }
}

void PrintArray (double arr[][5]) {
    for(size_t row = 0; row < 3; row++) {
        for(size_t col= 0; col< 5; col++) {
            std::cout<< arr[row][col] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main(){
    double data[3][5] = {
        10., 11., 12., 13., 14.,
        20., 21., 22., 23., 24.,
        30., 31., 32., 33., 34.
    };

    PrintArray(data);
    ChangeArray(data);
    PrintArray(data);

    return 0;
}

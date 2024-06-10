#include <iostream>
using namespace std;

int main() {

    int row, col;
    double **array;

    cout << "Enter the number of rows (max 3): ";
    cin >> row;
    
    while (row > 3) {
        cout << "Dimensions cannot exceed 3. Try again: ";
        cin >> row;
    }

    cout << "Enter the number of columns (max 3): ";
    cin >> col;
    while (col > 3) {
        cout << "Dimensions cannot exceed 3. Try again: ";
        cin >> col;
    }

    array = new double*[row];
    for (int i = 0; i < row; i++) {
        array[i] = new double[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array[i][j] = i * col + j;
        }
    }

    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < row; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}

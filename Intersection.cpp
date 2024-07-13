#include <iostream>
using namespace std;

void inter(int arr[], int arr1[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr[i] == arr1[j]) {
            cout << arr[i] << " ";
            i++;
            j++;
        } else if (arr[i] < arr1[j]) {
            i++;
        } else {
            j++;
        }
    }
}

int main() {
    int arr[6] = {1, 2, 2, 3, 4,5};
    int arr1[4] = {2, 2, 3,5};

    inter(arr, arr1, 6, 4);
    cout << endl;

    return 0;
}

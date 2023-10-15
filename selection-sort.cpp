#include <iostream>

void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            std::swap(arr[i], arr[maxIndex]);
        }
    }
}

int main() {
    int n = 5;
    int arr[] = {8, 6, 2, 5, 1};

    selectionSortDescending(arr, n);

    std::cout << "Sorted Array in Descending Order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

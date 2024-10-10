#include "shaker_sort.h"

template <typename T>
void shaker_sort(T arr[100], int n) {
    int left = 0;
    int right = n - 1;
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        right--;
        if (!swapped) {
            break;
        }
        swapped = false;
        for (int i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                std::swap(arr[i], arr[i - 1]);
                swapped = true;
            }
        }
        left++;
    }
}
#include "binary_insertion_sort.h"

template <typename T>
void binary_insertion_sort(T arr[100], int n) {
    for (int i = 1; i < n; i++) {
        T key = arr[i];
        int left = 0;
        int right = i - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < key) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        for (int j = i - 1; j >= left; j--) {
            arr[j + 1] = arr[j];
        }
        arr[left] = key;
    }
}
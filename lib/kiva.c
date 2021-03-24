//
// Created by SystemLight on 2021/3/24.
//

#include "kiva.h"

void cprintf(wchar_t *s) {
    wprintf(L"%ls\n", s);
}

void print(char *s) {
    printf("%s\n", s);
}

void print_int(int s) {
    printf("%d\n", s);
}

void print_int_array(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        print_int(arr[i]);
    }
}

void swap(int arr[], int l, int r) {
    int tmp = arr[l];
    arr[l] = arr[r];
    arr[r] = tmp;
}

int partition(int arr[], int low, int high) {
    // [1,8,4,2,7,6,{3}]
    // [1,2,4,8,7,6,{3}]
    // [1,2,{3},8,7,6,4]

    int pivot = arr[high];
    int current = low;
    for (int i = low; i < high; i++) {
        if (arr[i] < pivot) {
            swap(arr, i, current);
            current += 1;
        }
    }
    swap(arr, current, high);

    return current;
}

void quick_sort(int arr[], int low, int high) {
    if (low >= high)return;
    int position = partition(arr, low, high);
    quick_sort(arr, low, position - 1);
    quick_sort(arr, position + 1, high);
}

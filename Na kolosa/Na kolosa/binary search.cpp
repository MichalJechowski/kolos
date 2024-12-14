﻿
#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {

    // Repeat until the pointers low and high meet each other, nie wiem
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (x == array[mid])
            return mid;

        if (x > array[mid])
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
// znajduje liczbe na pozycji 6
int main(void) {
    int array[] = { 1, 4, 5, 6, 7, 8, 9 };
    int x = 7;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}
#include <stdio.h>

void selectionSort(int a[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int min = i;
        for(int j = i + 1; j < size; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        if(min != i) {
            int temp;
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

int main() {
    int arr[] = {3,1,4,2,64,8};
    selectionSort(arr, 6);
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

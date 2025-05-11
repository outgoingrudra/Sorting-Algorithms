#include <stdio.h>


void swap(int *a , int *b){
    if (a != b) { 
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int partition(int A[], int l, int h) {
    int pivot = A[l];
    int i = l + 1;
    int j = h;

    while (1) {
        while (i <= h && A[i] <= pivot) i++;
        while (j >= l && A[j] > pivot) j--;

        if (i < j) {
            swap(&A[i], &A[j]);
        } else {
            break;
        }
    }

    swap(&A[l], &A[j]);
    return j;
}


void QuickSort(int A[], int l , int h){
    if (l < h) {
        int j = partition(A, l, h);
        QuickSort(A, l, j - 1);
        QuickSort(A, j + 1, h);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    QuickSort(A, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

#include <stdio.h>
void swap(int *a , int *b){
    if (a != b) { 
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}


void merge(int A[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = 0;
    int B[h - l + 1];  // Temporary array 

    while (i <= mid && j <= h) {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }

    while (i <= mid)
        B[k++] = A[i++];

    while (j <= h)
        B[k++] = A[j++];

    for (i = l, k = 0; i <= h; i++, k++)
        A[i] = B[k];
}

// Recursive Merge Sort
void MergeSort(int A[], int l , int h){
    if (l < h) {
        int mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main() {
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

    MergeSort(A, 0, n - 1);  

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

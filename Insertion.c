#include <stdio.h>

void Insertion(int A[],int n){
    for(int i = 1 ; i < n ; i++ ){
        int key = A[i] ;
        int j = i-1 ;
        while ( j >= 0 && A[j] > key ){
            A[j+1] = A[j];
            j-- ;
        }
        A[j+1] = key;
    }
}


int main(){
    int n;
    printf(" Enter size of Array : ");
    scanf("%d",&n);
    printf(" Enter Array Elements : ");
    int A[n];

    for(int i = 0 ; i<n ; i++ ) scanf("%d",&A[i]);
    
    printf(" Array : ");
     for(int i = 0 ; i<n ; i++ ) printf("%d ",A[i]);
     Insertion(A,n);
     printf("\nSorted  Array : ");
     for(int i = 0 ; i<n ; i++ ) printf("%d ",A[i]);
     return 0;

}
#include <stdio.h>


void swap(int *a , int *b){
    if (a != b) { 
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

void Selection(int A[],int n){
   int i , j ,k ;
   for(int i = 0; i < n-1 ; i++){
    for(j=k=i; j < n ; j++){
        if (A[j] < A[k]){
            k = j;
        }
    }
    swap(&A[i],&A[k]);
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
     Selection(A,n);
     printf("\nSorted  Array : ");
     for(int i = 0 ; i<n ; i++ ) printf("%d ",A[i]);
     return 0;

}
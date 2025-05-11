#include <stdio.h>

void BubbleSort(int A[] ,int n)
{
        int i , j;
        for( i = 0 ; i < n-1 ; i++ ){
            for( j = 0 ; j < n-1-i ; j++ ){
                if( A[j] > A[j+1] ){
                    int t = A[j] ;
                    A[j] = A[j+1] ;
                    A[j+1] = t ;
                }
            }
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
     BubbleSort(A,n);
     printf("\nSorted  Array : ");
     for(int i = 0 ; i<n ; i++ ) printf("%d ",A[i]);
     return 0;

}
/*
eta nai 

print an array in reverse order
*/
#include<stdio.h>
 void   array_in(int,int *ar[]);
  void  array_rev_out(int,int *ar[]);

int main()
{
    int size; scanf("%d",&size);
    int arr[size];
    array_in(size,arr);
    array_rev_out(size,arr);
}

void array_in(int n,int *ar[n]){
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
}

void array_rev_out(int n,int *ar[]){
    for(int i=n-1;i>=0;i--){
        printf("%d ",ar[i]);
    }
}

/*
ata nai

 You are given a N N matrix M containing integer values. Replace each element (13 M[i][j] with the sum of its adjacent elements (top, bottom, left, right).
If an adjacent element does not exist (i.e., at edge/corners), consider it as 0. 
Write the program in C using only pointers and instead of array indexing use pointer arithmetic.
4 4
1 1 1 1        
1 1 1 1
1 1 1 1
1 1 1 1
output will be: 2 3 3 2 
                3 4 4 3 
                3 4 4 3 
                2 3 3 2 
*/
#include<stdio.h>
int main()
{
    int n,m; scanf("%d %d",&n,&m);
    int ara[n][m];
    ara_cin_2d(n,m,ara);
    replace(n,m,ara);
    ara_cout(n,m,ara);
}

void ara_cin_2d(int n,int m,int *ar[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&ar[i][j]);
        }
    }
}

void replace(int n,int m,int *ar[n][m]){
    int sum[n+1][m+1];
    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            sum[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            sum[i][j]=ar[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ar[i-1][j-1]=sum[i][j-1]+sum[i][j+1]+sum[i-1][j]+sum[i+1][j];
        }
    }
}

void ara_cout(int n,int m, int *ar[n][m]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}

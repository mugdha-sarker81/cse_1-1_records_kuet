/*
Pollution levels across a city are represented using a 2D grid. The city is divided into an N × M grid,
where each cell (i, j) represents the pollution level in that area. A “highly polluted region” is defined as a 3 × 3 subgrid 
where the average pollution level exceeds a given threshold T. Output the coordinates of the top-left cell (i, j) of each detected 3 × 3 highly polluted subgrid
using a self-defined function. Assume N ≥ 3 and M ≥ 3.
4 4 1
1 1 1 1 
1 1 1 1 
1 1 1 1
1 1 1 1
output will be: coordinate:(0 0) avg: 1
                coordinate:(0 1) avg: 1
                coordinate:(1 0) avg: 1
                coordinate:(1 1) avg: 1
*/
#include <stdio.h>
int main() {
    int n,m,t; scanf("%d%d%d",&n,&m,&t);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            int sum=0;
            for(int k=i;k<i+3;k++){
                for(int l=j;l<j+3;l++){
                    sum+=mat[k][l];
                }
            }
            mat[i][j]=sum;
        }
    }
    double ans[n-2][m-2];
 for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            ans[i][j]=(double)mat[i][j]/9;
        }
 }
 for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            if(ans[i][j]>=t){
                printf("coordinate:(%d %d) avg:%lf",i,j,ans[i][j]);
            }
        }
 }

    return 0;
}

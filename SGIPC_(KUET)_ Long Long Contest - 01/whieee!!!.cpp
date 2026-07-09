#include<stdio.h>
#include<math.h>
int main()
{
    int mat[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int row,col;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
           if(mat[i][j]==1){
            row =i;
            col=j;
            break;
           }
        }
    }
    row= abs(row-2);
    col=abs(col-2);
    printf("%d",row+col);
 
    return 0;
}

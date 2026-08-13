/*
take two 2d array and multiply them using user defined multiply() function.
take matrix input from command line using command line arguments

gcc multiply.c -o m
./m 2 2 2 2      //matrix dimention
1 1    1 1   output: 2 2
1 1    1 1           2 2
*/
#include<stdio.h>
#include<stdlib.h>
void input_mat(int a,int b,int mat[a][b]);
void multiply(int a,int b,int c,int d,int mat1[a][b],int mat2[c][d],int res[a][d]);
void print_mat(int a,int b,int mat[a][b]);
int main(int argc,char *argv[])
{
    int a= atoi(argv[1]); int b= atoi(argv[2]);
    int c= atoi(argv[3]); int d= atoi(argv[4]);

    if(b!=c){
         printf("invalid row or collumn.try again");
         return 0;
    }
    int mat1[a][b],mat2[c][d],res[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            res[i][j]=0;
        }
    }
    input_mat(a,b,mat1);
    input_mat(c,d,mat2);
    multiply(a,b,c,d,mat1,mat2,res);
    print_mat(a,d,res);
}

void input_mat(int a,int b,int mat[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}

void multiply(int a,int b,int c,int d,int mat1[a][b],int mat2[c][d],int res[a][d]){
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            for(int k=0;k<b;k++){
                res[i][j]+= mat1[i][k]*mat2[k][j];
            }
        }
    }
}

void print_mat(int a,int b,int mat[a][b]){
    printf("*****output matrix*****\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

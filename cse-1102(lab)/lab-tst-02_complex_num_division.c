/*  find out the division of two given imaginary number

input: 4 2 -2 1  . like-> (4+2i) / (-2+i) = ?
output: the division is an imaginary number: -1.20  -1.60i

*/
#include<stdio.h>
int main()
{       
    double a,b,c,d; scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double x,y,mod;

    mod= c*c + d*d;
    x= (a*c+b*d)/mod;
    y= (b*c-a*d)/mod;

    if(y==0){
        printf("the division is a real number: %.2lf",x);
    }else if(x==0){
        printf("the division is an imaginary number: %.2lfi",y);
    }else{
        if(y>0){
            printf("the division is an imaginary number: %.2lf + %.2lfi",x,y);
        }else{
             printf("the division is an imaginary number: %.2lf  %.2lfi",x,y);
        }
    }
}

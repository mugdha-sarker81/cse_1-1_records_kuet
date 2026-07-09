/*Q: write a C program that takes 6-bit int then,

1. if the numben is odd, count the number of 1's in its binany representation

2. if the numben is even count the numben of O's in it's binary repnesentation

Note: don't use loop use if, else if ,bitwise and ternary openators
*/
#include<stdio.h>
int main()
{
    int n,cnt=0,a;
    scanf("%d",&n); a=n;
        cnt+= (n&1)?1:0; n= n>>1;
        cnt+= (n&1)?1:0; n= n>>1;
        cnt+= (n&1)?1:0; n= n>>1;
        cnt+= (n&1)?1:0; n= n>>1;
        cnt+= (n&1)?1:0; n= n>>1;
        cnt+= (n&1)?1:0; n= n>>1;
    if(a%2==1){
        printf("odd number\n");
        printf("the number of 1's: %d",cnt);
    }else{
        printf("even number\n");
        printf("the number of 0's: %d",6-cnt);
    }
}

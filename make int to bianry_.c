/* 
i got two int and have to convert it to a binary number and and do some operation
without using any loop
*/

#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d",&a,&b);
    c=a;
    char bina[6],binb[6];
    int a1=0, b1=0;

    // converting a to a binary num
    if(a>=32){
        a=a-32; bina[0]='1'; a1++;
    }else{
        bina[0]='0';
    }
    if(a>=16){
        a=a-16; bina[1]='1'; a1++;
    }else{
        bina[1]='0';
    }
    if(a>=8){
        a=a-8; bina[2]='1'; a1++;
    }else{
        bina[2]='0';
    }
    if(a>=4){
        a=a-4; bina[3]='1'; a1++;
    }else{
        bina[3]='0';
    }
    if(a>=2){
        a=a-2; bina[4]='1'; a1++;
    }else{
        bina[4]='0';
    }
    if(a>=1){
        a=a-1; bina[5]='1'; a1++;
    }else{
        bina[5]='0';
    }

    // converting b to a binary num

    if(b>=32){
        b=b-32; binb[0]='1'; b1++;
    }else{
        binb[0]='0';
    }
    if(b>=16){
        b=b-16; binb[1]='1'; b1++;
    }else{
        binb[1]='0';
    }
    if(b>=8){
        b=b-8; binb[2]='1'; b1++;
    }else{
        binb[2]='0';
    }
    if(b>=4){
        b=b-4; binb[3]='1';  b1++;
    }else{
        binb[3]='0';
    }
    if(b>=2){
        b=b-2; binb[4]='1'; b1++;
    }else{
        binb[4]='0';
    }
    if(b>=1){
        b=b-1; binb[5]='1'; b1++;
    }else{
        binb[5]='0';
    }
    

    if(c%2==0){
        printf("a is even\n");
        if(a1==b1){
            printf("a and b have the same number of 1's\n");
        }else{
            printf("a and b do not have the same number of 1's\n");
        }
    }else{
        printf("a is odd\n");
        if(bina[0]==bina[5] && bina[1]==bina[4] && bina[2]==bina[3]){
            printf("a is palindrome\n");
        }else{
            printf("a is not palindrome\n");
        }
    }
}

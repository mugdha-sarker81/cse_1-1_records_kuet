/* read intgers until 0, skip negative and palindrome, 
for the remaining count collatz step(if even n/2, otherwise 3*n+1, until it becomes one)
                                12 steps: 9
for: 12 7 121 -4 0              7 steps: 16
                                skipped: 121
                                skipped: -4
                                terminated
                                valid count: 2
                                total count: 25
*/
#include<stdio.h>

int palindrome(int x){
    int n=x,sum=0;
    while(x!=0){
        int dig = x%10; x/=10;
        sum+= dig; sum*=10; 
    }
    sum/=10;
    if(sum==n && n>9){ return 1;}                 
    else{ return 0;}
}
  
int step_cnt(int x){
    int cnt=0;
    while(x!=1){
        if(x%2==0){x/=2;}
        else{ x= 3*x+1;}
        cnt++;
    }
    return cnt;
}
int main()
{
    int val_cnt=0, tot_cnt=0;

    while(1){
        int x; scanf("%d",&x);
        if(x==0) {break;}

        if(x<0 || palindrome(x)){
            printf("skipped: %d\n",x);
        }else{
            int step = step_cnt(x);
            printf("%d steps: %d\n",x,step);
            val_cnt++;  tot_cnt+= step;
        }
    }
    printf("terminated\n");
    printf("valid count: %d\n",val_cnt);
    printf("total count: %d",tot_cnt);
    return 0;
}

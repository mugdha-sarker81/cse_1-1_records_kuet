/*  takes an integer n as input and prints all pairs of prime numbers whose sum is equal to n. If no such pair exists, print "no valid prime found."
  like -> input : 10
          output: 3 + 7, 5 + 5

          input: 34
          out  : 3 + 31 , 5 + 29 , 11 + 23 , 17 + 17
*/
#include<stdio.h>

int isprime(int n){
    int flag= 1;
    for(int i=2;i*i<=n;i++){ 
        if(n%i==0){ 
            flag= 0; break;
        }
    }
    return flag;
}

int main()
{
    int n,ck=0; scanf("%d",&n); 
    for(int i=2;i*2<=n;i++){ 
        if(isprime(i) && isprime(n-i)){ 
            printf("%d + %d\n",i,n-i); 
            ck=1;
        }
    } 
    if(ck==0){
        printf("no valid prime found.");
    }
    return 0;
}

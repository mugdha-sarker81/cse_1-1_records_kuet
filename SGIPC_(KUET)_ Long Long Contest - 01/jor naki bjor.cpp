#include<stdio.h>
int main()
{
    int base=0,t;
    scanf("%d",&t);
    char a[4]="X--";
    char b[4]="X++";
    char c[4]="--X";
    char d[4]="++X";
 
    while(t--){
        char task[4];
        scanf("%s",&task);
        if( strcmp(task,a)==0 || strcmp(task,c)==0 ){
            base--;
        }
       if( strcmp(task,b)==0 || strcmp(task,d)==0 ){
            base++;
        }
    } 
    printf("%d",base);
    return 0;
}

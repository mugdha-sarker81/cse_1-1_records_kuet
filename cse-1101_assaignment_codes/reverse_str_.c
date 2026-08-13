/* reverse a string 
  idea: two pointer theory
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]; scanf("%s",&s);
    int len= strlen(s);
    
    int i=0,j=len-1;
    while(i<j){
        char tmp =s[i];
        s[i]=s[j];
        s[j]=tmp;
        i++;j--;
    }
    printf("%s",s);
    return 0;
}

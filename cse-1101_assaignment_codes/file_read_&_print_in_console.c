#include<stdio.h>
int main()
{
    FILE *fp;
    fp= fopen("input.txt","r");
    int date,y; char day[15],m[15];
    while((fscanf("%s %d %s %d",&day,&date,&m,&y)!=EOF))
    {
        printf("%s\t%d\t%s\t%d",day,date,m,y);
    }
    fclose(fp);
    return 0;
}

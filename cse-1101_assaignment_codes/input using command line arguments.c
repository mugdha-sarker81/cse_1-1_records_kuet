/* 
recive some value from command line using command line arguments and show their average

    gcc average.c -o avg
    ./avg 10 20 30 40 

    ans: 25.00
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    float sum=0;
    for(int i=1; i<argc;i++)
    {
        sum += atof(argv[i]);
    }
    double avg= sum/(argc-1);
    printf("%.2lf",avg);
    return 0;
}

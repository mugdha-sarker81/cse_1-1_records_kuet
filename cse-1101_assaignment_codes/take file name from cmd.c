/*
  take input of a file name "input.txt" from command line using command line arguments.
  write each word in reverse order in "output.txt" until the total char size becomes greater than 12.
  example: I am Mugdha Sarker Anik
  output : I ma ahdguM (size: 9) 

  gcc fileread.c -o read
  ./read input.txt output.txt
  
*/
#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    FILE *fp;
    fp= fopen(argv[1],"r");
    FILE * fptr;
    fptr= fopen(argv[2],"w");

    int i=0; char s[12];
    while(1){
        fscanf(fp,"%s",&s);
        i+= strlen(s);
        if(i>12) break;
        fprintf(fptr,"%s ",strrev(s));
    }

    fclose(fp);
    fclose(fptr);
    return 0;
}

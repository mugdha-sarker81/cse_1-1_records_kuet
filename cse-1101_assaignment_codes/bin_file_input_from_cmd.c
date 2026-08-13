/*
Write a program that can be run on command line as follows:
./student_info student.dat Status.txt 101 "Name" 85.50 Here, 

(i) student. dat is a binary file that will be written with the given information (roll, name, marks) as parameters, 
(ii) Status.txt will contain file open status redirected from console by checking the file pointers used in the program.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct students {
    int roll;
    char name[20];
    double mark;
};

int main(int argc,char *argv[])
{
    FILE *fp;
    fp= fopen(argv[1],"wb");
    FILE *fptr;
    fptr= fopen(argv[2],"w");
    if(argc<6) fprintf(fptr,"insufficient data");
    if(fp==NULL){
        fprintf(fptr,"staus:failed to open binary output file\n");
         return 0;
    }else{
        fprintf(fptr,"successfully opened binary writting file\n");
    }
    struct students s;
    s.roll= atoi(argv[3]);
    strcpy(s.name,argv[4]);
    s.mark = atof(argv[5]);
    size_t  written= fwrite(&s,sizeof(s),1,fp);
    if(written==1){
        fprintf(fptr,"roll:%d\nname:%s\nmark:%.2lf\n",s.roll,s.name,s.mark);
        fprintf(fptr,"successfully written the record on student.dat file.\n");
    }else 
        fprintf(fptr,"error writing record to file\n");
    return 0;
}

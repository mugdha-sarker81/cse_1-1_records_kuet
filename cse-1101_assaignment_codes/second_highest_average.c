/*
Write a program in C that will take the roll number and marks of 3 subjects
(Math, Physics, Chemistry) of N students as input. Calculate the average mark
of each student and print the roll number and average mark of the student
whose average mark is the second highest. If more than one student gets the
second highest average, print the roll number and average mark of the student
who got the highest mark in Math among them. It is ensured that no two
students get the same mark in Math.

4
12 90 98 78
23 56 78 67 
3 45 68 78
23 45 67 78
output:   roll:23 avg_mark:67.00
*/

#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int roll[n];
    double math[n],phy,chem,avg[n];
    for(int i=0;i<n;i++){
        scanf("%d %lf %lf %lf",&roll[i],&math[i],&phy,&chem);
        avg[i]= (math[i]+phy+chem)/3;
    }

    for(int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(avg[j]>avg[i]){
                double tmp= avg[i];
                avg[i]= avg[j];
                avg[j]= tmp;

                tmp= math[i];
                math[i]= math[j];
                math[j]= tmp;

                tmp= roll[i];
                roll[i]= roll[j];
                roll[j]= tmp;
            }else if(avg[j]==avg[i] && math[j]>math[i]){
                double tmp= math[i];
                math[i]= math[j];
                math[j]= tmp;

                tmp= roll[i];
                roll[i]= roll[j];
                roll[j]= tmp;
            }
        }
    }
    printf("roll:%d avg_mark:%.2lf",roll[1],avg[1]);
}

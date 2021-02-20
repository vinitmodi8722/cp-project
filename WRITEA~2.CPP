//Write a program to read marks from keyboard and your program should
//display equivalent grade according to following table(if else ladder)
//Marks rade
//100 - 80 Distinction
// 79 - 60 First Class
//59 - 40 Second Class
//<40 Fail

int number;
#include<stdio.h>

int main()
{
    int marks;
    printf("\n Enter Marks between 0-100 :");
    scanf("%d",&marks);
    if(marks>100 || marks <0)
    {
        printf("\n Your Input is out of Range");
    }
    
    else if(marks>=80)
    {
        printf("\n Distinction");
    }
 
    else if(marks>=60)
    {
        printf("\n First Class");
    }
    
    else if(marks>=40)
    {
        printf("\n Second Class");
    }
    
    else
    {
        printf("\n Fail");
    }
    
    return 0;
}



















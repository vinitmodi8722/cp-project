//Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!

#include <stdio.h>
 
void main()
{
    double number, sum = 0, i;
 
    printf("\n enter the number: ");
    scanf("%lf", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + (1 / i);
        if (i == 1)
            printf("\n 1 +");
        else if (i == number)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
    }
   
}


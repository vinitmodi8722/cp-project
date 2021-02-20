//Write a C program to find Maximum out of 3 Numbers.


#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    
    if(a > b)
    {
        if(a > c)
        {
            max = a;
        }
        else
        {
             max = c;
        }
    }
    else
    {
        if(b > c)
        {
            max = b;
        }
        else
        {
              max = c;
        }
    }
    
       printf("Maximum among all three numbers = %d", max);

    return 0;
}
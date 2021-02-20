#include <stdio.h>
int main()
{
    int a1, a2, addition, subtraction, multiply, Division;
    float divide;
    
    printf("Enter ANY Number = ");
    scanf("%d", &a1);
    printf("Enter ANY Number = ");
    scanf("%d", &a2);
    addition    = a1 + a2 ;
    subtraction = a1 - a2;
    multiply    = a1 * a2;
    divide      = a1 / a2;   
    printf("addition    =%d\n",addition);
    printf("subtraction =%d\n",subtraction);
    printf("multiply    =%d\n",multiply);
    printf("Division    =%.2f\n",divide);
    
    return 0;
}
    
//Write a C program to interchange two numbers.

#include <stdio.h>

int main()
{
      int first, second, temp;
      printf("Enter first number: ");
      scanf("%d", &first);
      printf("Enter second number: ");
      scanf("%d", &second);

      temp = first;

      first = second;

      second = temp;

      printf("\nAfter interchange, firstNumber = %.2d\n", first);
      printf("After interchange, secondNumber = %.2d", second);
      return 0;
}

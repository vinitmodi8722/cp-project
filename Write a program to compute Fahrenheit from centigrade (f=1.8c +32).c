//Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)

#include<stdio.h>

int main()
{
 float Fahrenheit, celsius;
 printf("Enter the temperature in celsius: ");
 scanf("%f", &celsius);

 Fahrenheit = (1.8 * celsius) + 32; 
  printf("\nTemperature in Fahrenheit: %.2f F\n", Fahrenheit);

 return 0;
}
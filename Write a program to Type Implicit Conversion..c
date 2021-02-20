//Write a program to Type Implicit Conversion.

#include<stdio.h> 
int main() 
{ 
    int x = 20;   
    char y = 'a';  
  
    x = x + y; 
    float z = x + 5.0; 
  
    printf("x = %d, z = %f", x, z); 
    return 0; 
} 
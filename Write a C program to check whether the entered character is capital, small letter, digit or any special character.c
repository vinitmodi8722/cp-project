//Write a C program to check whether the entered character is capital, small letter, digit or any special character.


#include<stdio.h>
int main()
{
   char ch;
   
   printf("\nEnter Any One Character :");
   scanf("%c", &ch);
   if (ch >= '0' && ch <= '9') 
   {
        printf("\nEntered Character is Digit");
   }    
   else if (ch >= 'A' && ch <= 'Z') 
   
   {
         printf("\nEntered Character is Capital Letter");
   }     
   else if (ch >= 'a' && ch <= 'z') 
   
   {
         printf("\nEntered Character is Small Letter");
   }     
   else 
   {
      printf("\nEntered Character is Special Character");
   }
      return 0;
}
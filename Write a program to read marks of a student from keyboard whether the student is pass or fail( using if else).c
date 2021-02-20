//Write a program to read marks of a student from keyboard whether the student is pass or fail( using if else)


#include <stdio.h>

int main() 
{
    int studentmark;
    
	printf("Enter studentmark : ");
	
	scanf("%d",&studentmark);
	
	if(studentmark >= 33)
	
		printf("\nstudent is pass");
		
	else
	
		printf("\nstudent is fail");
		
	return 0;
}


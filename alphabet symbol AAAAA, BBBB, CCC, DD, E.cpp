//AAAAA
//BBBB
//CCC
//DD
//E

#include <stdio.h>
int main() 
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            printf("%c",'A'+i);
        }
        printf("\n");
    }
    return 0;
}
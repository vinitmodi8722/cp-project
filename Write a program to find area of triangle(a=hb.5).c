 #include <stdio.h>

int main()
{
    float b, h, area;
     //h=height,b=base
       printf("Enter base of the triangle: ");
    scanf("%f", &b);
    printf("Enter height of the triangle: ");
    scanf("%f", &h);

        area = (b * h) * 0.5;

        printf("Area of the triangle = %.2f ", area);

    return 0;
}
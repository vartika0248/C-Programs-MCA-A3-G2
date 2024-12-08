#include<stdio.h>
typedef struct
{
    float real;
    float imaginary;
}
complex;
int main()
{
    complex cnum1, cnum2, sum;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f%f", &cnum1.real, &cnum1.imaginary);
    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f%f", &cnum2.real, &cnum2.imaginary);
    sum.real = cnum1.real + cnum2.real;
    sum.imaginary = cnum1.imaginary + cnum2.imaginary;
    printf("SUM = %0.1f+%0.1fi", sum.real, sum.imaginary);
    return 0;
}

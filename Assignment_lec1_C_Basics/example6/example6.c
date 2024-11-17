#include <stdio.h>
#include <stdlib.h>

int main()
{   float A;
    float B,Z =0;

    printf("Enter value of A \n");
    fflush(stdout);

    scanf("%f", &A);
    printf(" Enter value of B \n");

    fflush(stdout);
    scanf("%f", &B);

    Z = A;
    A = B;
    B = Z ;

     printf(" value of A = %f \n",A);
     printf("Enter value of B = %f",B);
    return 0;
}

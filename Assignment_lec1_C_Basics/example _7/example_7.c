#include <stdio.h>
#include <stdlib.h>

int main()
{ float A;
    float B;

    printf("Enter value of A \n");
    scanf("%f",&A);
    printf(" Enter value of B \n");
    scanf("%f",&B);

    A = A + B;
    B = A - B;
    A = A  - B;

     printf(" value of A = %0.2f \n",A);
     printf("Enter value of B = %.2f",B);

    return 0;
}

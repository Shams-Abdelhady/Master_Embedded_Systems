#include <stdio.h>
#include <stdlib.h>

int main()
{   float product ;
    float Number1;
    float Number2;

    printf("Enter two  number :\n");

    fflush(stdout);
    scanf("%f %f",&Number1,&Number2);
    product = Number1 * Number2;
    printf(" product : %.4f",product);
    return 0;
}

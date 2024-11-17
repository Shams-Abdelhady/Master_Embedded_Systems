#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int Number1;
    int Number2;
    printf("Enter two integer number :\n");
    fflush(stdout);
    scanf("%d %d",&Number1,&Number2);
    sum = Number1 + Number2;
    printf("sum : %d",sum);

    return 0;
}

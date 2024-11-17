#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  character;
    printf(" Enter character  : \n");
    fflush(stdout);
    scanf("%c", &character);
    printf(" ASCI Value of %c = %d",character,character);
    return 0;
}

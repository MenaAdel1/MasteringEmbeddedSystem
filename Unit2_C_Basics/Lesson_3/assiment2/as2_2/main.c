#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf (" Enter the alphapet : ");
    fflush(stdin);fflush(stdout);
    scanf("%c ",&x);
    if ( x=='a'||x=='o'||x=='e'||x=='i'||x=='u')
        printf("%c is vowel",x);
    else
        printf (" %c is constant ",x );
    return 0;
}

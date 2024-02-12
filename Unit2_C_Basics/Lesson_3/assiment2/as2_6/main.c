#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,i ,sum =0;
    printf("Enter an integer number :");
    fflush(stdin);fflush(stdout);
    scanf("%d ",&num);
    for ( i=1;i<=num ;++i )
    {
     sum+=i;
    }
    printf("  sum= %d",sum);

    return 0;
}

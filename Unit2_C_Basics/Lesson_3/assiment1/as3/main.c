#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y ,sum=0;
    printf(" Enter two integer : ");
    fflush(stdin);fflush(stdout);
    scanf("%d %d ",&x ,&y);
    sum = x+y;
    printf("Sum : %d ",sum);
    return 0;
}

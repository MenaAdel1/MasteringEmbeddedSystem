#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a integer :");
    fflush(stdin);fflush(stdout);
    scanf(" %d ",&num);
    printf("you entered : %d" ,num);
    return 0;
}

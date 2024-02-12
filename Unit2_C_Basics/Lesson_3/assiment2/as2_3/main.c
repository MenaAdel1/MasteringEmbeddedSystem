#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 ,num2 ,num3 ;
    printf("Enter three number ");
    scanf(" %f %f %f ",&num1 ,&num2 ,&num3 );
    if (num1>num2)
    {

        if (num1>num3)
        printf("%f the largest number ",num1);
        else
         printf("%f the largest number ",num3);
    }
    else
    {
         if (num2>num3)
        printf("%f the largest number ",num2);
        else
         printf("%f the largest number ",num3);
    }
    return 0;
}

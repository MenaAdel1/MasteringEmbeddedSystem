#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,product ;
    printf( "Enter two number : ");

    scanf( "%f %f ",&num1,&num2);
    product = num1 * num2;
    printf("Product %f",product);
    return 0;
}

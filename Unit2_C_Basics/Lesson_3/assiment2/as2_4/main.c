#include <stdio.h>
#include <stdlib.h>

int main()
{
   float num;
   printf("Enter the number ");
   scanf("%f",&num);
   if ( num>0)
    printf("%.2f is positive ",num);
    else if  (num<0)
   printf(" %.2f is negative ",num);
   else
    printf ("%.2f you entered  zerooo",num);



    return 0;
}

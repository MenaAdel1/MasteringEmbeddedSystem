#include <stdio.h>
#include <stdlib.h>

int main()
{
   int  i,n,factorial=1;
   printf( "Enter an integer :");
   scanf("%d",&n);
   if (n>=0)
   {
        for (i=1;i<=n;i++)
      {
      factorial*=i;
      }
      printf(" factorial = %d ",factorial);
   }
   else
   printf("Erorr!!! the factorial of negative number does not exist ");


    return 0;
}

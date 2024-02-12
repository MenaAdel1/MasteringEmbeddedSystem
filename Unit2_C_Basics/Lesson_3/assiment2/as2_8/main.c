#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    float x,y;
    printf("Enter operation + or - or * or / : ");
    fflush(stdin);fflush(stdout);
    scanf (" %c ",&a);
    printf("Enter two number :");
     fflush(stdin);fflush(stdout);
    scanf("%f %f ",&x,&y);
    switch (a){
    case '+':
    printf ( " %f +%f =%f ", x,y,x+y);
    break;
        case '-':
    printf ( " %f -%f =%f ", x,y,x-y);
    break;
       case '*':
    printf ( " %f *%f =%f ", x,y,x*y);
    break;
       case '/':
    printf ( " %f /%f = %f ", x,y,x/y);
    break;
       default :
    printf ( "Erorr !!! the opearation not correct ");
    break;
    }
    return 0;
}

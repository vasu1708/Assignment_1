#include<stdio.h>
int main()
{
    int number_1,number_2;
    printf("Enter first number:");
    scanf("%d",&number_1);
    printf("Enter second number:");
    scanf("%d",&number_2);
    printf("Sum of %d and %d is %d\n",number_1,number_2,(number_1+number_2));
    printf("Difference of %d and %d is %d\n",number_1,number_2,(number_1-number_2));
    printf("Division of %d and %d is %d\n",number_1,number_2,(number_1/number_2));
    printf("Modulo Division  of %d and %d is %d\n",number_1,number_2,(number_1%number_2));


return 0;
}

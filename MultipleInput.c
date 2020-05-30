#include<stdio.h>
int main()
{
    int number_1,number_2,number_3,sum;
    printf("Enter values of number_1,number_2,number_3: ");
    scanf("%d%d%d",&number_1,&number_2,&number_3);
    sum=number_1+number_2+number_3;
    printf("sum of %d+%d+%d is %d",number_1,number_2,number_3,sum);
    return 0;

}

#include<stdio.h>
int main()
{
    int per;
    printf("Enter percentage:");
    scanf("%d",&per);
    if(per>=80)
        printf("A grade");
    else if(per>=70 && per<80)
        printf("B grade");
    else if(per>=60 && per<70)
        printf("C grade");
    else if(per>=45 && per<60)
        printf("D grade");
    else if(per>=0 && per<45)
        printf("FAIL");
    else
        printf("Invalid Percentage");

    return 0;

}

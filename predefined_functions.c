#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char name[]="corona virus";
    char name1[]="COVID";
    //strcmp() function
    if(strcmp(name,name1)==0)
        printf("'corona virus' and 'COVID-19' strings are same\n");
    else
        printf("'corona virus' and 'COVID-19' strings are not same\n");

    char str[10];
    //strcpy() function
    strcpy(str,name);
    printf("Copy of 'corona virus' string is stored in another variable as: %s\n",str);
    //strrev() function
    printf("The reverse string of 'corona virus' is: %s\n",strrev(name));
    //strlen() function
    printf("The length of the string 'corona virus' is: %d\n",strlen(name));
    char name2[]="pandemic";
    //strupr() function
    printf("Uppercase form of string 'pandemic' is: %s\n",strupr(name2));
    //strlwr() function
    printf("Lowercase form of string 'PANDEMIC' is: %s\n",strlwr(name2));
    //pow() function
    printf("The value of 25 power 4 is: %lf\n",pow(25,4));
    //sqrt() function
    printf("Square root of 441 is: %lf\n",sqrt(441));
    //ceil() function
    printf("Ceiling value of 67.4 is: %f\n",ceil(67.5));
    //floor() function
    printf("Floor value of 98.8 is: %f\n",floor(98.5));
    //rand() function
    printf("Random value from 1 to 10 is: %d\n",(rand()%10)+1);
    return 0;
}

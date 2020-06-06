#include<stdio.h>
struct employee_details
{
    char name[15];
    int experience;
    char employ_id[15];
    long int salary;
};
int main()
{
   struct employee_details employee[5];
   for(int i=0;i<5;i++)
   {
       printf("Enter name:");
       scanf("%s",&employee[i].name);
       printf("Enter id:");
       scanf("%s",&employee[i].employ_id);
       printf("Enter experience:");
       scanf("%d",&employee[i].experience);
       printf("Enter monthly salary:");
       scanf("%ld",&employee[i].salary);
   }
   printf("\nName   Employee_Id   Experience(in yrs)   Salary\n");
   printf("--------------------------------------------------\n");
   for(int i=0;i<5;i++)
   {
       printf("%s   %s   %d   %ld\n",employee[i].name,employee[i].employ_id,employee[i].experience,employee[i].salary);
   }
   return 0;
}

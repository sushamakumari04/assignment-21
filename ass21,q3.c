//3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct Employee
{
int id;
char name[10];
float salary;
};

struct Employee input()
{   struct Employee e;
    printf("enter the employee id ,name and salary\n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,10,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
int display(struct Employee e1)
{
 printf("%d %s %f",e1.id,e1.name,e1.salary);
}
int main()
{
struct Employee e1;
e1=input();
display(e1);
return 0;
}

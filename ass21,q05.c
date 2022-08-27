//5. Write a function to sort employees according to their salaries [ refer structure from
//question 1]
#include<stdio.h>
#include<string.h>
struct Employee
{
 int id;
 char name[20];
 float salary;
};

struct Employee input()
{
struct Employee e;
printf("enter the id ,name and salary of employee\n");
scanf("%d",&e.id);
fflush(stdin);
fgets(e.name,20,stdin);
e.name[strlen(e.name)-1]='\0';
scanf("%f",&e.salary);
return e;
}
void SortBySalary(struct Employee e[],int size)
{
struct Employee temp;
  int r,i;
  for(int r=1;r<=size-1;r++)
    {
     for(int i=0;i<=size-1-r;i++)
        {
          if(e[i].salary>e[i+1].salary)
          {
            temp=e[i];
            e[i]=e[i+1];
            e[i]=temp;
          }
        }
    }
}

void display(struct Employee emp[])
{
for(int i=0;i<5;i++)
{
 printf("%d %s %f",emp[i].id,emp[i].name,emp[i].salary);
}
}
int main()
{
struct Employee emp[5];
for(int i=0;i<5;i++)
{
 emp[i]=input();
}
SortBySalary(emp,5);
display(emp);

return 0;
}

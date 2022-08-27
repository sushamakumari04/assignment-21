//5. Write a function to sort employees according to their salaries [ refer structure from
//question 1].
#include<stdio.h>
#include<string.h>
struct Employee
{
int id;
char name[10];
float salary;
};
struct Employee input()
{
struct Employee e;
printf("enter the id , name and salary\n");
scanf("%d",&e.id);
fflush(stdin);
fgets(e.name,10,stdin);
e.name[strlen(e.name)-1]='\0';
scanf("%f",&e.salary);
return e;
}
void sortBySalary(struct Employee e[],int size)
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
            e[i+1]=temp;
          }
        }
    }
}
void display(struct Employee e)
{
  printf("\n %d %s %f",e.id,e.name,e.salary);
}
int main()
{
struct Employee e[5];
for(int i=0;i<5;i++)
{
   e[i]=input();
}
sortBySalary(e,5);
for(int i=0;i<5;i++)
{
  display(e[i]);
}

return 0;
}

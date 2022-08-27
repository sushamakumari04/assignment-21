//4. Write a function to find the highest salary employee from a given array of 10
//employees. [ Refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct Employee
{ int id;
 char name[20];
 float salary;
};
struct Employee input()
{
  struct Employee e;
 printf("Enter the id ,name and salary of employee\n");
 scanf("%d",&e.id);
 fflush(stdin);
 fgets(e.name,10,stdin);
 e.name[strlen(e.name)-1]='\0';
 scanf("%f",&e.salary);
 return e;
}
 struct Employee HighestSalaryEmployee(struct Employee e[],int size)
 {
  struct Employee hs;
   hs.salary=e[0].salary;
  for(int i=1;i<size;i++)
 {
      if(hs.salary<e[i].salary)
        {
          hs = e[i];
        }
 }
// printf("%d %s %f",hs.id,hs.name,hs.salary);
 return hs;
 }
  void display(struct Employee e)
  {

   printf("%d %s %f",e.id,e.name,e.salary);
  }
int main()
{
struct Employee emp[10];
printf("enter the data of 10 employee\n");
struct Employee e1;
for(int i=0;i<10;i++)
{
  emp[i]=input();
}
  e1=HighestSalaryEmployee(emp,10);
  display(e1);

return 0;
}

//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.
#include<stdio.h>
struct Marks
{
int rollno;
char name[20];
float chemistryM,mathsM,phyM;
};
struct Marks input()
{
struct Marks m;
printf("enter your name ,rollno, chemistryM,mathsM and phyM\n");
scanf("%d",&m.rollno);
fflush(stdin);
fgets(m.name,20,stdin);
m.name[strlen(m.name)-1]='\0';
scanf("%f",&m.chemistryM);
scanf("%f",&m.mathsM);
scanf("%f",&m.phyM);
return m;
}
void percentage(struct Marks m[5])
{
  float sum;
  float per;
  for(int i=0;i<5;i++)
 {
    sum=0;
    sum=m[i].chemistryM+ m[i].mathsM +m[i].phyM;
    per=(sum/300.0)*100.0;
    printf(" %d ",m[i].rollno);
    printf(" %s ",m[i].name);
    printf("the percentage is equal to %f\n",per);
 }
}
int main()
{
struct Marks m[5];
for(int i=0;i<5;i++)
{
  m[i]=input();
}
percentage(m);
}

//10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
//Physics (each out of 100) using a structure named Marks having elements roll no.,
//name, chem_marks, maths_marks and phy_marks and then display the percentage
//of each student.
#include<stdio.h>
#include<string.h>

struct Marks
{
int rollno;
char name[20];
int chemMarks;
int mathsMarks;
int phyMarks;
};
struct Marks input()
{
struct Marks mk;
printf("enter the rollno, name and marks of chem,math, phy of a student\n");
scanf("%d",&mk.rollno);
fflush(stdin);
fgets(mk.name,20,stdin);
mk.name[strlen(mk.name)-1]='\0';
scanf("%d",&mk.chemMarks);
scanf("%d",&mk.mathsMarks);
scanf("%d",&mk.phyMarks);
return mk;
}
 float percentage(int m1,int m2,int m3)
 {

  int sum=0;
  float per;
  float percentage;
  sum=m1+m2+m3;
  per=sum/300;
  percentage=per*100;
 return percentage;
 }
  void DisplayPercentage(struct Marks m[],int size)
  {
    int sum;
    float per;
    for(int i=0;i<5;i++)
    {
        struct  Marks total;
        total[i]= percentage(m[i].chemMarks,m[i].mathsMarks,m[i].phyMarks);
    // printf("%d %s",m[i].rollno,m[i].name);
  //   sum = m[i].chemMarks+m[i].mathsMarks+m[i].phyMarks;
  //   per =(sum/300)*100;
  //   printf(" the percentage is = %f ",per);
     printf("\n");
    }

  }


int main()
{
struct Marks m[5];
for(int i=0;i<5;i++)
{
 m[i]=input();
}
DisplayPercentage(m,5);

return 0;
}

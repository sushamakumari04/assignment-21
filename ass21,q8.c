//8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<string.h>
struct Student
{
int rollNo;
char name[20];
int age;
};
struct Student input()
{
struct Student st;
printf("enter the rollno,name and age of student\n");
scanf("%d",&st.rollNo);
fflush(stdin);
fgets(st.name,20,stdin);
st.name[strlen(st.name)-1]='\0';
scanf("%d",&st.age);
return st;
}
void display(struct Student s[])
{
for(int i=0;i<10;i++)
{
 printf("%d %s %d",s[i].rollNo,s[i].name,s[i].age);
 printf("\n");
}

}
int main()
{
struct Student s[10];
for(int i=0;i<10;i++)
{
 s[i]=input();
}
display(s);


return 0;
}

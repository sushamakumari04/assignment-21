//9. Write a program to store information of n students and display them using structure

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
void display(struct Student s[],int n)
{
for(int i=0;i<n;i++)
{
 printf("%d %s %d",s[i].rollNo,s[i].name,s[i].age);
 printf("\n");
}

}
int main()
{
    int n;
    printf("enter the number of total students");
    scanf("%d",&n);
struct Student s[n];
for(int i=0;i<n;i++)
{
 s[i]=input();
}
display(s,n);


return 0;
}

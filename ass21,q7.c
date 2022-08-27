//7. Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct Time
{
int hour, min ,sec;
};
struct Time TDifference(struct Time t1,struct Time t2)
{
 struct Time temp;
if(t1.hour>t2.hour)
{
  t1.hour=t1.hour-1;
  t1.min=t1.min+60;
  t1.sec=t1.sec+60;

 temp.hour=t1.hour-t2.hour;
 temp.min=t1.min-t2.min;
 temp.sec=t1.sec-t2.sec;
}
else
{
  t2.hour=t2.hour-1;
  t2.min=t2.min+60;
  t2.sec=t2.sec+60;

 temp.hour=t2.hour-t1.hour;
 temp.min=t2.min-t1.min;
 temp.sec=t2.sec-t1.sec;
}
 return temp;

}
void display(struct Time tt)
{
printf("%d : %d :%d ",tt.hour,tt.min,tt.sec);
}
int main()
{
struct Time tt;
struct Time t1={11,30,56};
struct Time t2={05,45,55};
tt=TDifference(t1,t2);
display(tt);

return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
int a,count=0;
printf("enter num:");
scanf("%d",&a);
while(a>0)
{
count++;
a=a/10;
}
printf("the digits %d",count);
getch();
return 0;
}

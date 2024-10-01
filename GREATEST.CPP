#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a, b,c;
printf("enter value of a:");
scanf("%d",&a);
printf("enter value of b:");
scanf("%d",&b);
printf("enter value of c:");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("greatest number =%d ");
}
else if(b>a&&b>c)
{
printf("greatest number =%d ");
}
else if(c>a&&c>b)
{
printf("greatest number =%d ");
}
getch();
return 0;
}
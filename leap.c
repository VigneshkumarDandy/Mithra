#include<stdio.h>
#include<conio.h>
void main()
{
int a;
scanf("%d",&a);
if((a % 400) == 0)
{
printf("Leap Year",a);
}
else if((a % 100) == 0)
{
printf("Not Leap Year",a);
}
else if((a % 4 ) == 0)
{
printf("Leap Year",a);
}
else
{
printf("Not Leap Year",a);
}
getch();
}

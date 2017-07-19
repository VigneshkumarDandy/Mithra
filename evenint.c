#include<stdio.h>
#include<conio.h>
void main()
{
int number,a,b;
scan("%d%d",&a,&b);
for(number=a;number<=b;number++)
{
if(number%2==0)
printf("%d",number);
}
getch();
}

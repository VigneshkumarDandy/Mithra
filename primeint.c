#include<stdio.h>
#include<conio.h>
int main()
{
int number,lower,upper,temp;
printf("Enter upper and lower limits:");
scanf("%d%d",&lower,&upper);
while(lower<upper)
{
temp=0;
for(number=2;number<=lower/2;number++)
{
if(lower%number==0)
{
temp=1;
break;
}
}
if(temp==0)
printf("%d",lower);
lower++;
}
return 0;
}

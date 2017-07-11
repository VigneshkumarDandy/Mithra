#include<stdio.h>
void main()
{
int base, power;
int result=1;
scanf("%d",&base);
scanf(%d",&power);
while(power!=0)
{
result*=base;
--base;
}
printf("%d",result);
}

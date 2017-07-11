#include<stdio.h>
#include<conio.h>
void main()
{
int base=2,number;
scanf("%d",&number);
for(base=2;base<=number-1;base++)
{
if(base%2==0)
{
printf("Not a Prime");
break;
}
}
if(base==number)
{
printf("Prime");
}
return 0;
}

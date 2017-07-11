#include<stdio.h>
void main()
{
int num,i,count=0;
scanf(%d",&num);
while(num)
{
num=num/10;
count++;
}
printf("Number of Digits",count);
return 0;
}

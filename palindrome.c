#include<stdio.h>
#include<conio.h>
void main()
{
int number, reverse=0, temp;
scanf("%d",&number);
temp=number;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(n==reverse)
printf("Palindrome");
else
printf("Not a Palindrome");
return 0;
}

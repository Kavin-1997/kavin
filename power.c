#include<stdio.h>
int main()
{
int base exponent;
long long result=1;
printf("Enter the base number:");
scanf("%d",&base);
printf("Enter an exponent:");
scanf("%d",&exponent);
while(exponent !=0)
{
result *=base;
--exponent;
}
printf("Answer =%d",result);
return 0;

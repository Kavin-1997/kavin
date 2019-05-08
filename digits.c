#include<stdio.h>
int main()
{
long long num;
int count=0;
printf("Enter any number:");
scanf("%11d",&num);
while(num !=0)
{
count++;
num / =10;
}
printf("Total digits:%d",count);
return 0;
}

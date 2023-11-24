#include<stdio.h>
void main()
{
int i,n,num,count;
printf("enter the range:");
scanf("%d",&n);
printf("the prime numbers in between ther ange 1 to %d:",n);
for (num=1;num<=n;num++)
{
count=0;
for (i=2;i<=num/2;i++)
{
if(num %i==0)
{
count++;
break;
}}
if(count==0&&num!=1)
printf("\n%d",num);
}

}

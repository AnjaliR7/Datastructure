#include<stdio.h>
void main()
{
int num,i;
printf("enter a number");
scanf("%d",&num);
printf("multiplicaton table of  %d ",num);
for (i=1;i<=10;i++)
{
printf("\n %d*%d=%d",i,num,i*num);
}
}

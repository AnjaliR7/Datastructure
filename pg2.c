#include<stdio.h>
void main()
{
char opt;
int n1,n2;
float res;
printf("choose an opertator(+,-,*,/)\n");
scanf("%c",&opt);
if(opt=='+')
{
printf("you have selected addition\n");
}
else if(opt=='-')
{
printf("you have seleceted sub\n");
}
else if(opt=='*')
{
printf("you have selected mul\n");
}
else
{
printf("you have selected div\n");
}
printf("enter a  f1 number\n");
scanf("%d",&n1);
printf("enter a f2number\n");
scanf("%d",&n2);
switch(opt)
{
case'+':
res=n1+n2;
printf("addition of %d and %d is %f",n1,n2,res);
break;
case'-':
res=n1-n2;
printf("substraction of %d and %d is %f",n1,n2,res);
break;
case'*':
res=n1*n2;
printf("multiplication of %d and %d is %f ",n1,n2,res);
break;
case'/':
res=n1/n2;
printf("division of %d and %d is %f",n1,n2,res);
break;
}
}

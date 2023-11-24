#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void traversal();
int a[10];
int n,pos,item,i;
void main()
{
//int a[10],n
printf("enter number of elements:");
scanf("%d",&n);
printf("\n enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
printf("\nChoose one option \n1.insertion \n2.deletion \n3.traversal\n");
int ch;
do
{
printf("\nenter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
insertion();
break;
case 2:
deletion();
break;
case 3:
traversal();
break;
case 4:
exit(0);
}}
while(ch<4);

}
void insertion()
{
printf("\nEnter the new element to be inserted: ");
scanf("%d", &item);
printf("Enter the position where element is to be inserted: ");
scanf("%d", &pos);
n=n+1;
for(i =n-1; i>=pos; i--)
a[i]=a[i-1];
a[pos-1]=item;
for (i = 0; i<n; i++)
{
printf("%d ", a[i]);
}

}
void deletion()
{
printf("\nenter the position to be deleted:\n");
scanf("%d",&pos);
item=a[pos];
for(i=pos;i<n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
printf("element deleted\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void traversal()
{
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

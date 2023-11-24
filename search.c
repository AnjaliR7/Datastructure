#include<stdio.h>
#include<stdlib.h>
int linear(int a[], int n, int key);
int binary(int a[], int low, int high, int key);
void main()
{
int n,key,lr,br;
int a[100];
printf("enter number of elements:");
scanf("%d",&n);
printf("enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nenter the key value:");
scanf("%d",&key);
printf("\nChoose one option \n1.linear \n2.binary\n");
int ch;
do
{
printf("\nenter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
lr=linear(a,n,key);
if(lr!=-1)
        {
printf("\nelement found at position %d",lr);
}
else
{
printf("\nelement not found");
}

break;
case 2:
br=binary(a,0,n-1,key);
if(br!=-1)
{
printf("\nelement found at position %d",br);
}
else
{
printf("\nelement not found");
}
break;

case 3:
exit(0);
}}
while(ch<3);

}

int linear(int a[], int n, int key)
{
    for (int i = 0; i < n; i++) {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binary(int a[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) {
            return mid;
    }
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    return -1;
    }
}

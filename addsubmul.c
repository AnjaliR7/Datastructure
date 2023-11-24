#include<stdio.h>
void print(int a[50][50],int m,int n)
{
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
          printf("%d ",a[i][j]);
        }
       printf("\n");
    }
}
void add(int a[50][50],int b[50][50],int m,int n)
{
  int c[50][50];
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];  
       }
    }
    printf("Resultant Matrix:\n");
    print(c,m,n);
}
void sub(int a[50][50],int b[50][50],int m,int n)
{
  int c[50][50];
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
            c[i][j]=a[i][j]-b[i][j];  
       }
    }
    printf("Resultant Matrix:\n");
    print(c,m,n);
}
void mul(int a[50][50],int b[50][50],int m,int q, int n)
{
  int c[50][50];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    print(c,m,q);
}
void main()
  {
     int a[50][50],b[50][50],m,n,p,q,ch;
     char c;
     printf("Enter row and col size for matrix 1\n");
     scanf("%d%d",&m,&n);
     printf("Enter matrix 1");
     for(int i=0;i<m;i++)
       {
         for(int j=0;j<n;j++)
          {
          scanf("%d",&a[i][j]);
          }
       }
       
    printf("Matrix 1 \n");
    print(a,m,n);
    printf("Enter row and col size for matrix 2\n");
    scanf("%d%d",&p,&q);
    printf("Enter matrix 1");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix 2 \n");
    print(b,p,q);
do
{
printf("1.Add\n2.Subtract\n3.Multiplication\n4.Exit\nEnter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: if(n==p)
add(a,b,m,n);
else
printf("Addition not possible");
break;
case 2:if(n==p)
sub(a,b,m,n);
else
printf("Subtraction not possible");
break;
case 3: if(n==p)
mul(a,b,m,q,n);
else
printf("Multiplication not possible");
break;
}
}
while(ch>0&&ch<4);
}        

                               


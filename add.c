#include<stdio.h>
int read(int x[10][10],int m,int n);
int add(int a[10][10],int b[10][10],int c[10][10],intm,intn);
int write(int x[10][10],int m,int n);
void main()
{
int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2);
printf("\n enter rows and columns of matrix1:\n");
scanf("%d%d",&r1,&c1);
printf("\n enter rows and columns of matrix2:\n");
scanf("%d%d",&r2,&c2);
if((r1==r2 && c1==c2))
{
printf("enter elements of matrix1:\n");
read(a,r1,c1);
printf("enter elements of matrix2:\n");
read(b,r2,c2);
printf("after adding a&b,matrices\n");
add(a,b,c,r1,c1);
write(c,r1,c1);
}
else
printf("addition is not possible");
}
int read(int x[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&x[i][j]);
}
int add(int a[10][10],int b[10][10],int c[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("\t%d",c[i][j]);
}
}



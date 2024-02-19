#include<stdio.h>
int rev(int a[],int n)
{
int i;
printf("\nenter the array elements");
for(i=0;i<n;i++)
printf("\nenter the %d elements=%d",i,a[i]);
printf("\nenter the reverse array elements");
for(i=n;i>=0;i--)
printf("\nenter the %d elements=%d",i,a[i]);
}
int main()
{
 int a[100],n;
 int i;
printf("enter the size of array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
 rev(a,n);
 }

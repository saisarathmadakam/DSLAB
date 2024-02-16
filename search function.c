include<stdio.h>
int search(int a[],i#nt n){
int i,search;
printf("enter the array size");
scanf("%d",&n);

printf("enter the %d elements= ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the search the array");
scanf("%d",&search);
for(i=0;i<n;i++)
{
 if(search==a[i]){
 printf("element found at %d",i);
 break;
 }
 }
 if(i==n){
 printf("element is not found");
 }
 return 0;
 }
 int main()
 {
 int a[100],n;
 search(a,n);
 }

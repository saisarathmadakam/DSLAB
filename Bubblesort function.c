#include<stdio.h>
int sort(int a[],int n)
{
int i,j,temp;
       for(i=0;i<n-1;i++)
         {
          for(j=i+1;j<n;j++)
           {
            if(a[i]>a[j])
              {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
           }
         }
      }
      printf("after bubble sort\n");
      for(i=0;i<n;i++)
      printf("%d\n",a[i]);
      }   
      int main(){
      int a[100],n;
      int i,j;
        printf("enter the number");
        scanf("%d",&n);
        int temp;
        printf("enter the %d elements=",n);
          for(i=0;i<n;i++){
       scanf("%d",&a[i]);
        }
      sort(a,n);
      }

#include<stdio.h>

    void Read(int a[], int n) {
        for(int i=0;i<n;i++){
            scanf("%d", &a[i] );
         }
         } 
      
      
      
      
       
      void print(int a[], int n) {
           int i;
           for(i=0;i<n;i++){
              printf("%d  ", a[i] );  
           }
       }
       
       
      void sort(int a[], int n) {
       int i,j,temp;
         for(i=1;i<n;i++)
            {
                temp=a[i];
                j=i-1;
             
         while(j>=0&& a[j]>temp)
             {
               a[j+1]=a[j];
               j--;
             }  
                a[j+1]=temp;
        }    }
  
        int main()
        {
          int n;
          printf("enter the no of elements");
          scanf("%d", &n);
          int a[n];
          printf("enter %d elements", n);
          Read(a, n) ;
          sort(a, n) ;
          print(a, n) ;
       }

#include<stdio.h>

      void swap( int *a,int *b){
      int temp=*a;
      *a=*b;
      *b=temp;
      }

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
       int i, j, min; 

  


    for (i = 0; i < n - 1; i++) {

        min= i; 

        for (j = i + 1; j < n; j++) 

            if (a[j] < a[min]) 

                min = j;

        swap(&a[min],& a[i]); 

    } 
} 

  
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

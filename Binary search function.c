#include<stdio.h>
void Read(int [], int);
void sort(int [], int);
void print(int [], int);
int search(int [], int, int);


    void Read(int a[], int n) {
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
         }
         } 
      
      
      int search(int a[],int n, int key) {
       
                int start, end, mid, pos=-1;
                start=0;
                end=n-1;
                while(start<=end){
                   mid=(start+end) /2;
                   if(key==a[mid]) {
                      pos=mid+1;
                      return pos;
                   } 
                   else if(key<a[mid]) {
                        end=mid-1;
                   } 
                   else if(key>a[mid]) {
                      start=mid+1;
                      } 
                   }
                      
                   if(pos==-1){
                   return -1;
                   }
                 
        } 
      
       
      void print(int a[], int n) {
           int i;
           for(i=0;i<n;i++){
              printf("%d  ", a[i] ); 
           }
       }
       
       
      void sort(int a[], int n) {
              int i, j, temp;
              for(i=0;i<n-1;i++){
                 for(j=i+1;j<n;j++){
                    if(a[i] >a[j]) {
                    
                    temp=a[i] ;
                    a[i] =a[j];
                    a[j] =temp;
                 }
              }
         } 
       } 
       int main(){
                 int n;
          printf("enter the no of elements");
          scanf("%d", &n);
          int a[n], key;
          printf("enter %d elements", n);
          Read(a, n) ;
          sort(a, n) ;
          print(a, n) ;
          printf("\nenter the element to search");
          scanf("%d",&key);
          
          int pos=search(a, n, key) ;
          if(pos==-1){
          printf("key is not found");
          } 
          else{
          printf("key is found at %d", pos);
          } 
       
       return 0;
       
       }

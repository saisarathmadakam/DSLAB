#include<stdio.h>
#include<stdlib.h>
  struct node
    {
       int data;
       struct node*next;
    };
   struct node*create_node(int data)
   {
      struct node*temp=malloc(sizeof(struct node));
      temp->data=data;
      temp->next=temp;
      return temp;
      }
      void print(struct node*tail)
      {
        struct node*ptr=tail->next;
        do{
           printf("%4d",ptr->data);
           ptr=ptr->next;
           }while(ptr!=tail->next);
           }
           
      struct node*add_beginning(struct node*tail, int data)
      {
         struct node*temp=malloc(sizeof(struct node));
      
        temp->data=data;
        temp->next=NULL;
        temp->next=tail->next;
        tail->next=temp;
        return tail;
        } 
        
        struct node*add_end(struct node*tail,int data)
        {
        struct node*temp=malloc(sizeof(struct node));
      
        temp->data=data;
        temp->next=NULL;
        temp->next=tail->next;
        tail->next=temp;
        tail=tail->next;
        return tail;
        }
        struct node*add_pos(struct node*tail, int data, int pos)
        { 
          struct node*temp=malloc(sizeof(struct node));
      
          temp->data=data;
          temp->next=NULL;
          struct node*ptr=tail->next;
          
          if(pos==1)
          add_beginning(tail,data);
           
        else{
          
            pos--;
            while(pos!=1)
             {
               ptr=ptr->next;
               pos--;
               }
             if(ptr==tail){
             temp->next=tail->next;
             tail->next=temp;
             tail=tail->next;
            }
            else
            { 
             temp->next=ptr->next;
             ptr->next=temp;
             }
             }
             
             return tail;
             }
              
              struct node*del_beg(struct node*tail)
              {
               struct node*temp=tail->next;
               tail->next=temp->next;
               free(temp);
               temp=NULL;
               return tail;
               } 
             struct node*del_end(struct node*tail)
             
              {
                struct node*temp=tail->next;
                while(temp->next!=tail)
                {
                  temp=temp->next;
                  }
                  temp->next=tail->next;
                  free(tail);
                  tail=temp;
                 
                  return tail;
                  }
                      
               struct node*del_pos(struct node*tail, int pos)
               { 
                 struct node*temp=tail->next;
                 
                 if(tail==NULL)
                  { 
                    printf("list is empty");
                   return tail;
                  } 
                 if(pos==1)
                 {
                   del_beg(tail);
                   } 
               
                else{    
                 
                  while(pos>2)
                  {
                    temp=temp->next;
                    pos--;
                    }
                   
                if(temp==tail)
                 {
                  temp->next=tail->next;
                  free(tail);
                  tail=temp;
                  }
                  
                  struct node*ptr;
                  
                  ptr=temp->next;
                  temp->next=ptr->next;
                  if(ptr==tail)
                  tail=temp;
                  free(ptr);
                  ptr=NULL;
                  
                  }
                 return tail;
                 } 
          
         
      int main()
      {
        int data;
       struct node*tail;
       tail= create_node(15);
       print(tail);
       tail=create_node(20);
       print(tail);
       printf("\n adding beg\n ");
       tail=add_beginning(tail,25);
       print(tail);
       printf("\n adding end\n");
       tail=add_end(tail,35);
       print(tail);
       printf("\n add position\n");
       tail=add_pos(tail,45,4);
       
       print(tail);
       printf("\n delete beg\n");
       tail=del_beg(tail);
       print(tail);
         printf("\n delete end\n");
         tail=del_end(tail);
    
         print(tail);
         printf("\n delete pos\n");
         tail=del_pos(tail,2);
         print(tail);
        }


























#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*left;
   struct node*right;
  }
  struct node*newnode(int data)
  {
     struct node*temp;
     temp=malloc(sizeof(struct node));
      temp->left=NULL;
      temp->data=data;
      temp->next=NULL;
      return temp;
   }
   struct node*insert(struct node*root,int data);
  {
       if(root==NULL)
          {
             root=newnode(data);
             return root;
             }
       else if(data<=root->data)
       root->left=insert(root->left,data);
       else 
       root->right=insert(root->right,data);
       return root;
       }
       void inorder(struct node*root)
       {
           if(head!=NULL)
           {
               inorder(root->left);
               printf("%d"
             
             
  int main()
  {
   struct node*root;
   root=insert(root,10);
   }

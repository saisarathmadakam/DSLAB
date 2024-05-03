#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node*left;
   struct node*right;
  };
  struct node*newnode(int data)
  {
     struct node*temp;
     temp=malloc(sizeof(struct node));
      temp->left=NULL;
      temp->data=data;
      temp->right=NULL;
      return temp;
   }
   struct node*insert(struct node*root,int data)
  {
       if(root==NULL)
          {
             root=newnode(data);
             return root;
             }
       else 
       {
       if(data<=root->data)
       root->left=insert(root->left,data);
       else if(data>root->data)
       root->right=insert(root->right,data);
      
       }
       return root;
   }    
       void inorder(struct node*root)
       {
           if(root!=NULL)
           {
               inorder(root->left);
               printf("%3d",root->data);
               inorder(root->right);
           }

}
 
  
  int main()
  {
   struct node*root;
   root=insert(root,10);
   root=insert(root,20);
   root=insert(root,5);
   root=insert(root,30);
   root=insert(root,0);
   inorder(root);
   
   }

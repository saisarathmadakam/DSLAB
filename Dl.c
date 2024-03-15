#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
   void create_node(struct node**head,int d)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=d;
    temp->next=NULL;
    
    *head=temp;
    return;
    }
void display(struct node *head) {
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
    printf("\nElements in the list: ");
    struct node *ptr = head;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return;
}
int count_of_nodes(struct node *head) {
    int count=0;
    if(head==NULL)
    {
        return 0;
    }

    struct node *ptr = NULL;
    ptr=head;
    while(ptr!=NULL) {
        count++;
        ptr=ptr->next;
    }
    return count;
}



void insert_at_end(struct node *head,int d) {
    struct node *temp = malloc(sizeof(struct node *));
    temp->data=d;
    temp->next=NULL;

    struct node *ptr = head;
    while(ptr->next!=NULL) {
        ptr=ptr->next;
    }
    ptr->next=temp;
}
struct node*insert_at_beg(struct node*head,int d)
{
    struct node *ptr = malloc(sizeof(struct node *));
    ptr->data=d;
    ptr->next=NULL;


    ptr->next=head;
    head=ptr;
    return head;

}

void insert_at_pos(struct node *head,int data, int pos)
{
    struct node*ptr=head;
    struct node*ptr2=malloc(sizeof(struct node *));
    ptr2->data=data;
    ptr2->next=NULL;

    pos--;
    while(pos!=1)
    {
        ptr=ptr->next;
        pos--;
    }
    ptr2->next=ptr->next;
    ptr->next=ptr2;
}

struct node* delete_at_beginning(struct node *head) {

    struct node *temp;

    temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    return head;
}
struct node* delete_at_end(struct node *head) {


    if(head==NULL) {
        printf("List is already empty");
    }
    else if(head->next==NULL) {
        free(head);
        head=NULL;
    }

    else {
        struct node *temp=head;
        struct node *ptr=head ;
        while(temp->next!=NULL) {
            ptr=temp;
            temp=temp->next;

        }
        ptr->next=NULL;

        free(temp) ;
        temp=NULL;


    }
    return head;
}
struct node* delete_at_position(struct node *head, int pos) {

    struct node *ptr,*temp;
    ptr=head;
    temp=head;
    if(head==NULL) {
        printf("List is already empty");
    }
    else if(head->next==NULL) {
        free(head);
        head=NULL;
    }


    if(pos==1) {

        head=delete_at_beginning(head) ;
        return head;

    }

    else {

        while(pos!=1) {

            ptr=temp;
            temp=temp->next;
            pos--;
        }
        ptr->next=temp->next;
        free(temp) ;
        return head;

    }

}

int main() {
    int size;
    struct node*head;

    create_node(&head,10);

   display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);

    insert_at_end(head,50);

    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);


    head =  insert_at_beg(head,20);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);

    insert_at_pos(head,9,2);
    display(head);
    size = count_of_nodes(head);
   printf("\nNumber of nodes = %d",size);
   head=delete_at_beginning(head);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);
    head=delete_at_end(head);
    
   display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);
    head=delete_at_position(head,2);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);
    
    
    
    
    
    
}

#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node*prev;
    int data;
    struct node *next;
};



void create_node(struct node**head,int d)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=d;
    temp->prev=NULL;
    temp->next=NULL;
    *head=temp;
    return;
}
void display(struct node*head)
{
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
struct node* at_beg(struct node*head,int d)
{
    struct node*ptr =malloc(sizeof(struct node*));

    ptr->prev=NULL;
    ptr->data=d;
    ptr->next=NULL;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    return head;
}


struct node*at_end(struct node*head,int d)
{
    struct node*ptr,*temp;
    ptr=malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->data=d;
    ptr->prev=NULL;

    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
    return head;
}




struct node*at_pos(struct node*head,int d,int pos)
{
    struct node*ptr,*temp;
    struct node*temp2=NULL;
    ptr=malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->data=d;
    ptr->prev=NULL;

    temp=head;
    while(pos>2)
    {
        temp=temp->next;
        pos--;
    }
    if(temp->next==NULL)
    {
        temp->next=ptr;
        ptr->prev=temp;
    }
    else {
        temp2=temp->next;
        temp->next=ptr;
        temp2->prev=ptr;
        ptr->next=temp2;
        ptr->prev=temp;
    }
}
struct node *delete_at_beg(struct node *head)
{
    struct node*ptr=head;
    if(head==NULL)
        printf("the list is empty");
    else {
        head=head->next;
        head->prev=NULL;
        free(ptr);
        return head;
    }
}
struct node *del_at_end(struct node*head)
{
    struct node *ptr=head,*ptr1;
    if(head==NULL)
        printf("the list is empty");
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr1=ptr->prev;
        ptr1->next=NULL;
        free(ptr);

    }
    return head;
}
struct node* delete_at_position(struct node *head, int pos) {

    struct node*temp=head;
    struct node*temp2=NULL;

    if(pos==1)
    {
        head=delete_at_beg(head);
        return head;
    }

    while(pos>1)
    {
        temp =temp->next;
        pos--;


    }


    if(temp->next==NULL)
    {
        head=del_at_end(head);
    }

    else {
        temp2=temp->prev;
        temp->next=temp->next;
        temp->next->prev=temp2;
        free(temp);
        temp=NULL;
    }
}


int search(struct node *head, int key) {
    struct node *ptr, *temp;
    temp=(struct node*)malloc(sizeof(struct node*)) ;
    ptr=head;
    int node, pos;
    while(ptr!=NULL) {
        if(ptr->data==key) {
            temp=ptr;
            //  node=count_nodes(temp) ;
            return node;
        }
        node++;
        ptr=ptr->next;

    }
    if(pos<=0) {
        return -1;

    }
}




int main() {
    int size;
    struct node*head;
    create_node(&head,10);
    head=at_beg(head,20);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);

    head=at_end(head,30);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);

    at_pos(head,40,2);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);

    head=delete_at_beg(head);
    display(head);
    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);

    head=del_at_end(head);
    display(head);

    size = count_of_nodes(head);
    printf("\nNumber of nodes = %d",size);
    delete_at_position(head,2);
    display(head);





    int key;
    printf("\nenter the element to search:");
    scanf("%d", &key);
    int node=search(head, key);
    if(node==-1) {
        printf("Element is not found\n");
    }
    else {
        printf("Element is found at %d", 1+node);

    }

    return 0;
}

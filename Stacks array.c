#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node*next;
}*top=NULL;

void push(int data)
{
    struct node*temp;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("stack is over flow");
        exit(1);
    }
    temp->data=data;
    temp->next=NULL;

    temp->next=top;
    top=temp;
}
void print()
{
    struct node*temp=top;
    printf("enter the elements in the list ");
    while(temp)
    {
        printf("%3d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}





int empty()

{

    if(top==NULL)
        return 1;
    else
        return 0;
}
int pop()
{
    int val;
    struct node*temp;

    if(empty())
    {
        printf("stack is under flow");
        exit(1);
    }
    temp=top;
    val=temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return val;
}

int peek()
{
    if(empty())
    {
        printf("stack is under flow");
        exit(1);
    }
    return top->data;
}


int main()
{
    int choice,data;
    while(1)
    {
        printf("1,push\n");
        printf("2,pop\n");
        printf("3,print\n");
        printf("4,peek\n");
        printf("5,quit\n");

        printf("enter the choice");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("enter the push element");

            scanf("%d",&data);
            push(data);
            break;

        case 2:
            data=pop();
            printf("delete the element  %d\n",data);
            break;
        case 3:
            print();
            break;
        case 4:
            printf("top most  element in the stack%d\n",peek());
            break;

        case 5:
            exit(1);
        default :
            printf("wrong choice\n");
            break;


        }
    }
    return 0;
}

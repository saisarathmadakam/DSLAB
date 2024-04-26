.h>
#include<stdlib.h>
#define s 4
int queue[s];#include
int front=-1;
int rear=-1;
void enqueuefront(int d)
{
    if(front==-1&&rear==-1||front==rear+1)
    {
        front=rear=0;
        queue[front]=d;
    }
    else if(front==0)
    {
        front=s-1;
        queue[front]=d;
    }
    else if(front==0&&rear==s-1)
    {
        printf("queue is full");
    }
    else
    {
        front--;
        queue[front]=d;
    }
}
void enqueuerear(int data)
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=data;<stdio
    }
    else if(rear==s-1)
    {
        rear=0;
        queue[rear]=data;
    }
    else {
        rear++;
        queue[rear]=data;
    }
}
void dequeuefront()
{
    if(front==-1&&rear==-1)
        printf("queue is empty");
    else if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==s-1)
    {
        printf("%d",queue[front]);
        front=0;
    }
    else
    {
        printf("%d",queue[front]);
        front++;
    }
}
void dequeuerear()
{
    if(front==-1&&rear==-1)
        printf("queue is empty");
    else if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    {
        printf("%d",queue[rear]);
        rear=s-1;
    }
    else
    {
        printf("%d",queue[rear]);
        rear--;
    }
}



void display()

{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("list is empty");
    }
    else
    {
        while(i!=rear)
        {
            printf("%4d ",queue[i]);
            i=(i+1)%s;
        }
        printf("%d",queue[rear]);

    }
    printf("\n");
}

    

    
       int main()
          {
             int choice,data;
     
     
     
     
         while(1)
         {
        printf("\n");
        printf("1,enqueuefront\n");
        printf("2,enqueuerear\n");
        printf("3,dequeuefront\n");
        printf("4,dequeuerear\n");
        printf("5,display\n");
        printf("enter the choice");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("enter enqueue the element");
            scanf("%d",&data);
            enqueuefront(data);
            break;

        case 2:
            printf("enter enqueue the element");
            scanf("%d",&data);
            enqueuerear(data);
            break;
            
        case 3:
            dequeuefront();
            break;
     
        case 4:
            dequeuerear();
            break;
        case 5:
            display();
            break;


        default:
            printf("wrong choice\n");
            break;
        }
             }



            }

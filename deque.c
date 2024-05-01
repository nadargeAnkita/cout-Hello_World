#include<stdio.h>
#include<stdlib.h>
#define size 5
int front = 4, rear = -1, num;
int q[size];
void enrear();
void derear();
void enfront();
void defront();
void display();
void exit();
int main()
{
   int i;
   for( i = 0; i < size; i++)
    {
       q[i] = 0;
    }
    printf("1.enrear\n2.derear\n3.enfront\n4.defront\n5.display\n6.exit\n");
    while(i != 0)
    {
       printf("Enter your Choice:");
       scanf("%d",&i);
       switch(i)
       {
           case 1:enrear();
           break;
           case 2:derear();
           break;
           case 3:enfront();
           break;
           case 4:defront();
           break;
           case 5:display();
           break;
           case 6:exit(0);
           break;
           default:printf("Wrong Choice\n");
           break;
        }
    }
}
void enrear()
{
    if(rear == 0)
    {
        printf("\nInsert Number:");
        scanf("%d",&num);
        rear++;
        q[rear] = num;
    }
    else if(front == rear || rear == (size - 1) || front == -1)
    {
        printf("Queue is Full!\n");
    }
    else if(rear != front && rear != (size - 1))
    {
        printf("\nInsert Number:");
        scanf("%d",&num);
        rear++;
        q[rear] = num;
    }
}
void derear()
{
    if(rear == -1)
    {
        printf("Queue is Empty from Rear\n");
    }
    else
    {
        printf("Deleted Element:%d\n",q[rear]);
        q[rear] = 0;
        rear--;
    }
}
void enfront()
{
    if(front > 3)
    {
        printf("Insert Number:");
        scanf("%d",&num);
        q[front] = num;
        front--;
    }
    else if(front == 0 && (rear == 0) || front == rear || rear == (size - 1) || 
    (front == -1))
    {
        printf("Queue is Full\n");
    }
    else if(front != rear && front != 0)
    {
        printf("\nInsert Number:");
        scanf("%d",&num);
        q[front] = num;
        front--;
    }
}
void defront()
{
    if(front == 4)
    {
        printf("Queue is Empty from Front!\n");
    }
    else
    {
        front++;
        printf("\nDeleted Elements:%d\n",q[front]);
        q[front] = 0;
    }
}
void display()
{
    int i;
    if(front == 4 && rear == -1)
    {
        printf("Front = %d\tRear = %d\n",0,rear);
        printf("Queue is Empty!\n");
    }
    else
    {
        if(front > 3)
        {
            printf("Front = %d\tRear = %d\n",0,rear);
            for(i = 0; i < size; i++)
            {
                printf("%5d",q[i]);
            }
            printf("\n\n");
        }
        else
        {
            printf("Front = %d\tRear = %d\n",front+1,rear);
            for(i = 0; i < size; i++)
            {
                printf("%5d",q[i]);
            }
            printf("\n\n");
        }
    }
}

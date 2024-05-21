#include<stdio.h>
#include<stdlib.h>
#define maxsize

void insert();
void delete();
void display();
int front=-1,rear=-1;
int queue[5];
void main()
{
	int choice;
	while (choice!=4)
	{
		printf("\n***********Main menu*************");
		printf("\n=================================");
		printf("\n1.Insert an element\n2.Delete an element\n3.Display an element\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
		    insert();
		    break;
		    case2:
		    delete();
		    break;
		    case3:
		    display();
		    break;
		    case4:
		    exit(0);
		    break;
		    default:
		    printf("\n Enter valid choice??\n");
		}
	}
}
void insert()
{
	int item;
	printf("\nEnter the element\n");
	scanf("%d",item);
	if(rear == maxsize-1)
	{
		printf("\nOVERFLOW\n");
		return;
	}
	if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
	}
	else
	{
		rear = rear+1;
	}
	queue[rear] = item;
	printf("\nvalue inserted");
}

void delete()
{
	int item;
	if(front == -1 || front > rear)
	{
		printf("\nUNDERFLOW\n");
		return;
	}
	else
	{
		item = queue[front];
		if(front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{
			front=front + 1;
		}
		printf("\nvalue deleted");
		
	}
}

void display()
{
	int i;
	if(rear == -1)
	{
		printf("\nEmpty queue\n");
	}
	else
	{
		printf("\nprinting value...\n");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d\n",queue[i]);
		}
	}
}

#include<stdio.h>
#include<malloc.h>
#include<conio.h>
 struct node
{
    int info;
    struct node *next;
} *start=NULL, *top=NULL;
void push ();
void pop();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("enter the choice\n1 push\n2 pop\n3 display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default:
                printf("wrong choice\n");
        }
    } return 0;
}
void push()
{
    struct node *temp;
    temp=malloc(sizeof(struct node *));
    printf("enter the data");
    scanf("%d",&temp->info);
    if(start!=NULL)
    {
        start=temp;
        top=start;
        start->next=NULL;
    }
    else
    {
        top->next=temp;
        top=temp;
        top->next=NULL;
    }
}
void pop()
{
    struct node *temp,*r;
    temp=malloc(sizeof(struct node *));
    if(start->next=NULL)
        printf("stack is empty\n");
    else
    {
        while(temp->next=NULL)
        {       r=temp;
                temp=temp->next;
        }
        printf("deleted stack is %d:",temp->info);
          r->next=NULL;
    }
}
void display()
{
    struct node *temp;
    temp=malloc(sizeof(struct node *));
    start=temp;
    if(start->next=NULL)
        printf("stack is empty");
    else
         while(temp->next!=NULL)
        {
            printf("stack is %d",temp->info);
            temp=temp->next;
        }
}

#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};

struct Node *create_list();
void display(struct Node *);
 
void main()
{
    struct Node *head;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    head=create_list(n);
    display(head);
}
 
struct Node *create_list(int n)
{
    int i;
    struct Node *p, *Head;
    for (i=0; i<n; i++)
    {
        if (i == 0)
        {
            Head = (struct Node*)malloc(sizeof(struct Node));
            if (Head==NULL)
            {
                printf("\nMemory not available, so node cannot be created \n");
            }
            else
            {
                p = Head;
            }
        }
        else
        {
            p->next = (struct Node*)malloc(sizeof(struct Node));
            p = p->next;
        }
        printf("Enter data for node %d: ",i+1);
        scanf("%d",&p->data);
    }
    p->next = NULL;
    return(Head);
}
 
void display (struct Node *head)
{
    struct Node *p;
    printf("Data entered in the list are:");
    for(p = head; p!= NULL; p = p->next)
    {
        printf ("\nNode data: %d", p->data);
    }
    printf ("\n");
}

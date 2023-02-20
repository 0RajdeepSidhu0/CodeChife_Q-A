#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = NULL;
void incert_beg(node *new);
void del_beg();
void print();
void peek();
int main()
{
    node *ptr;
    int choice, x = 1;
    while (x == 1)
    {
        printf("    \npress 1 to incert.\npress 2 to delete.\npress 3 to travers.\npress 4 to peek.\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ptr = (node *)malloc(sizeof(node));
            printf("Enter yor data: ");
            scanf("%d", &ptr->data);
            ptr->next = NULL;
            incert_beg(ptr);
            break;
        case 2:
            del_beg();
            break;

        case 3:
            print();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("\nEnd of List\n");
            x = 0;
            break;
        default:
            printf("\nInvalid Input\n");
            break;
        }
    }
}
void incert_beg(node *new)
{
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
}
void del_beg()
{
    if (head == NULL)
    {
        printf("UF");
    }
    else
    {
        node* temp = head;
        printf("%d is deleted\n", temp->next);
        head = head->next;
        free(temp);
        temp = NULL;
    }
}
void print()
{
    if (head == NULL)
    {
        printf("UF\n");
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d \n", temp->data);
    }
}
void peek()
{
    node* temp = head;
    if (head == NULL)
    {
        printf("UF\n");
    }
    else{
    printf("top most value is %d\n", temp->data);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
void incert_beg(struct node *new);
void incert_end(struct node *new);
void print();
void del_beg();
void del_end();
int main()
{
    int choice;
    struct node *ptr;
    int x = 1;
    while (x == 1)
    {

        printf("\n press 2 for insertion at the beganing;\n press 3 for insertion at the end;\n press 4 for delition from the end;\npress 5 to delition at the beg;\npress 6 to print all the entries;\n press 7 to exit;\n Enter: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 2:
            ptr = (struct node *)malloc(sizeof(struct node));
            printf("Enter you data: ");
            scanf("%d", &ptr->data);
            ptr->next = NULL;
            ptr->prev = NULL;
            incert_beg(ptr);
            break;
        case 3:
            ptr = (struct node *)malloc(sizeof(struct node));
            printf("Enter you data: ");
            scanf("%d", &ptr->data);
            ptr->next = NULL;
            ptr->prev = NULL;
            incert_end(ptr);
            break;
        case 4:
            del_end();
            break;
        case 5:
            del_beg();
            break;
        case 6:
            print();
            break;
        case 7:
            x = 0;
            break;
        default:
            printf("Invalid input.\n");
        }
    }
}
void incert_beg(struct node *new)
{
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head->prev = new;
        head = new;
    }
}
void incert_end(struct node *new)
{
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->prev = temp;
    }
}
void print()
{
    if (head == NULL)
    {
        printf("uf");
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
void del_end()
{
    if (head == NULL)
    {
        printf("uf");
    }
    else
    {
        struct node *temp1 = head;
        struct node *temp2 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        while (temp2->next != temp1)
        {

            temp2 = temp2->next;
        }
        temp2->next = NULL;
        printf("you have deleted: %d", temp1->data);
        temp1->prev = NULL;
        free(temp1);
    }
}
void del_beg()
{
    if (head == NULL)
    {
        printf("uf");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        printf("you have deleted: %d", temp->data);
        temp->next = NULL;
        free(temp);
        head->prev = NULL;
    }
}

#include <iostream>
#include <conio.h>

using namespace std;


struct node
{
       int data;
       node *next;
       };


node * reverse_linklist(node **ptr)
{
     node *prev = NULL;
     node *current = *ptr;
     node *next;
     
     while(current != NULL)
     {
                         next = current->next;
                         current->next = prev;
                         prev = current;
                         current = next;
 }
 *ptr = prev;
 return *ptr;
};


node * reverse_linklistAlternate(node **ptr)
{
     node *prev = NULL;
     node *prev_prev = NULL;
     node *current = *ptr;
     node *next;
     int count = 1;
     while(current != NULL)
     {
                         count++;
                         next = current->next;
                         if(count % 2 == 0)
                         current->next = prev;
                         else
                         current->next = prev_prev;
                         prev_prev = prev;
                         prev = current;
                         current = next;
 }
 //*ptr = prev;
 return *ptr;
};

void print(node * head)
{
     if(head == NULL)
     return;
     while(head != NULL)
     {
                cout<<head->data<<" ";
                head = head->next;
                }
 };
int main()
{
    node *head = new node();
    head->data = 10;
    head->next = new node();
    head->next->data = 20;
    head->next->next = new node();
    head->next->next->data = 30;
    head->next->next->next = new node();
    head->next->next->next->data = 40;
    head->next->next->next->next = new node();
    head->next->next->next->next->data = 50;
     print(head);
     //node * temp = reverse_linklist(& head);
     cout<<endl;
     print(reverse_linklistAlternate(& head));
    cout<<getch();
    return 0;    
};



#include <iostream>
#include <conio.h>

using namespace std;

struct node
{
       int data;
       node *ptr;
       };

int addLinkListNumbes(node *a, node *b)
{
    int sum = 0;
    node *root1 = a;
    node *root2 = b;
    int count = 1;
                    int carry = 0;
    while(root1 != NULL || root2 != NULL)
    {
                int digit = 0;
                int add = 0;
                if(root1 != NULL && root2 != NULL)
                add = root1->data + root2->data;
                else if(root1 != NULL)
                add = root1->data;
                else
                add = root2->data;

                if (count > 1 && carry > 0)
                {
                          add = add+ carry;
                          carry = 0;
                 }

                 digit = add%10;
                                
                if(add>9)
                {
                carry = add/10;
                }
                sum += digit*count;
                count = count*10;
                if(root1 != NULL)
                root1 = root1->ptr;
                if(root2 != NULL)
                root2 = root2->ptr;
                }
    return sum;
};


int main()
{
    node *root1;
    node *root2;
    //linklist 1
    node *a1 = new node();
    node *a2 = new node();
    node *a3 = new node();
    a1->data = 3;
    a1->ptr = a2;
    
    a2->data = 1;
    a2->ptr = a3;
    
    a3->data = 5;
    a3->ptr = NULL;
    
    root1 = a1;
    
    
    //linklist 2
    
    node *b1 = new node();
    node *b2 = new node();
    node *b3 = new node();
    node *b4 = new node();


    b4->data = 8;
    b4->ptr = b1;
    
    b1->data = 5;
    b1->ptr = b2;
    
    b2->data = 9;
    b2->ptr = b3;
    
    b3->data = 2;
    b3->ptr = NULL;
    
    root2 = b4;
    
    //add two linklist
    int sum = addLinkListNumbes(root1,root2);
    cout<<"Sum of linklist numbers is "<<sum<<endl;
    cout<<getch();
    return 0;
}

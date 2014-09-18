#include <iostream>
#include <conio.h>
#include<fstream>

using namespace std;

struct node
{
       int n;
       node * ptr;
       };

void printLL(node *root)
{
     node *temp = root;
     while(temp != NULL){
     cout<<temp->n<<endl;
     temp = temp->ptr;
     }
 }

void rotateLL(node **root,int k)
{
     node *a,*b,*c;
     a = *root;
          
     while(k>1){
     a = a->ptr;
     k--;
     }
     b = a->ptr;
     
     c = b;
     
     while(c->ptr != NULL)
     c = c->ptr;
     
     c->ptr  = *root;
     *root = b;
     a->ptr = NULL;
         
 }

int main()

{
    node *start = new node();
    node *start1 = new node();
    node *start2 = new node();
    node *start3 = new node();
    node *start4 = new node();
    node *start5 = new node();

    start->n = 10;
    start->ptr = start1;
    start1->n = 20;
    start1->ptr = start2;
    start2->n = 30;
    start2->ptr = start3;
    start3->n=40;
    start3->ptr = start4;
    start4->n=50;
    start4->ptr = start5; 
    start5->n=60;
    start5->ptr = NULL;
    
    printLL(start);
    rotateLL(&start,4);
    cout<<endl;
    printLL(start);
        
	cout<<getch();
	return 0;
	


}

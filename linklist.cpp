#include <iostream>
#include <conio.h>

using namespace std;


struct linklist
{
       int data;
       linklist *next;
       };

struct BST
{
       int data;
       BST *left;
       BST *right;
       };


linklist *createLL(int *a,int n)
{
         linklist *ll = new linklist();
         ll->data = a[0];
         ll->next = NULL;
         for(int i =1;i<n;i++)
         {
         linklist *llnew = new linklist();
         llnew->data = a[i];
         llnew->next = ll;
         ll = llnew;                 
                 }
                 return ll;
         };

void traverseLL(linklist *root)
{
         linklist *p;
         p= root;
         cout<<"\n";
         while(p != NULL)
         {
                    cout<<p->data<< " ";
                    p = p->next;
                    }
                    };

//
//int countLL(linklist *root)
//{
//          int n=0;
//         linklist *p;
//         p= root;
//         while(p != NULL)
//         {
//                    n++;
//                    p = p->next;
//                    }
//                    return n;
//                    };
//
//
//int midFromLL(linklist *root)
//{
//    linklist *pp,*p;
//    p = root;
//    pp = root;
//    while(pp != NULL)
//    {
//             p = p->next;
//             pp = pp->next;
//             if(pp != NULL)
//             pp=pp->next;
//             }
//             return p->data;
//}
//
//int getElementByIndex(linklist *root, int x)
//{
//          int n=0;
//         linklist *p;
//         p= root;
//         while(p != NULL)
//         {
//                    n++;
//                    p = p->next;
//                    }
//                    return n;
//                    };
//

//BST *createBSTFromLL(linklist *p,int first , int last)
//{
//    BST *bst = new BST();
//    int middle = first+(last-first)/2;
//    bst->left = createBSTFromLL(p,first,middle-1);
//    bst->data = getElementByIndex(p,middle);
//    bst->right = createBSTFromLL(p,middle+1,last);
//    return bst;
//}


void RecursiveReverse(struct linklist** headRef) {
struct linklist* first;
struct linklist* rest;
if (*headRef == NULL) return; // empty list base case
first = *headRef; // suppose first = {1, 2, 3}
rest = first->next; //         rest = {2, 3}
if (rest == NULL) return; // empty rest base case
RecursiveReverse(&rest); // Recursively reverse the smaller {2, 3} case
// after: rest = {3, 2}
first->next->next = first; // put the first elem on the end of the list
first->next = NULL; // (tricky step -- make a drawing)
*headRef = rest; // fix the head pointer
}

int main()
{
    int n;
    cout<<"Please enter the count of linklist\n";
    cin>>n;
    int a[n];
    cout<<"Enter Numbers\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    linklist *p = createLL(a,n);
    traverseLL(p);
    //int n1 = countLL(p);
    //createBSTFromLL(p,0,n1-1);
    RecursiveReverse(&p);
    traverseLL(p);
    cout<<getch();
    return 0;
};

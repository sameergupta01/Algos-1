#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stack>
#include <algorithm>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <vector>

using namespace std;


struct node 
{
       int data;
       node *left;
       node *right;
       };


void zigzagLevelTraversal(node * root)
{
     stack<node*> q;
     stack<node*> s;
     bool isQ = false;
     node * temp = root;
     q.push(NULL);
     q.push(temp);     
     node * t;
     while((!q.empty() && q.top() != NULL) || (!s.empty() && s.top() != NULL))
     {
//             cout<<"isQ"<<isQ<<endl;        
             if(isQ)
             {
                   cout<<"Queue Push"<<endl;
                   isQ = false;
                   q.push(NULL);
                   while(s.top())
                   {
                   t = s.top();
                   s.pop();
                   
                   cout<<t->data<<" ";
                   if(t->right != NULL)
                    q.push(t->right);
                   if(t->left != NULL)
                    q.push(t->left);
  
                   }
                   s.pop();

              }
              else
              {
                    cout<<"Stack Push"<<endl;
                    isQ = true;
                    s.push(NULL);
                    while(q.top())         
                    {
                    t = q.top();
                    q.pop();
                    cout<<t->data<<" ";

                    if(t->left != NULL){
                     //cout<<t->left->data<<endl;
                     s.push(t->left);}
                    if(t->right != NULL){
                     //cout<<t->right->data<<endl;
                     s.push(t->right);}
                    }
                    q.pop();
                }
           }

 };

struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
};
 
 int postLevelOrder(node *root,int sum)
 {
     if(root == NULL)
     return 0;
     
     postLevelOrder(root->right,sum);
     sum = sum+root->data;
     root->data = sum;
     postLevelOrder(root->left,sum);
     
 };
 
 int getSize(node * root)
 {
     int lsize = 0;
     int rsize = 0;
     if(root == NULL)
     return 0;
     
     lsize = getSize(root->left);
     rsize = getSize(root->right);
     return lsize+rsize+1;
     
 };
 
int main()
{
    node * root = newnode(20);

    root->left = newnode(10);

    root->right = newnode(30);

    root->left->left = newnode(40);

    root->left->right = newnode(50);
//
//    root->right->left = newnode(60);
//
//    root->right->right = newnode(70);
//    
//    root->left->left->left = newnode(80);
//    
//    root->left->left->right = newnode(90);
//
//    root->left->right->left = newnode(100);    
//    
//    root->left->right->right = newnode(110);    
//
//    root->right->left->left = newnode(120);
//    
//    root->right->left->right = newnode(130);
//
//    root->right->right->left = newnode(140);
//    
//    root->right->right->right = newnode(150);

    
//    zigzagLevelTraversal(root);
    //postLevelOrder(root,0);
    //zigzagLevelTraversal(root);
    cout<<getSize(root);
    cout<<getch();
    return 0;
}

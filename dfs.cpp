#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stack>

using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
};
 


void dfs(node *root)
{
    stack<node*> s;
    s.push(root);

     while(!s.empty())          
     {
                             node *top = s.top();
                             s.pop();
                             if(top->left != NULL)
                                          s.push(top->left);
                             if(top->right != NULL)
                                          s.push(top->right);
                                          cout<<top->data;                
                             }

    
};

int countSize(node *root)
{
    static int count = 0;
   if(root == NULL)
   return 0;
   
   //countSize(root->left);
   //count++;
   //cout<<root->data<<endl;
   //countSize(root->right);
    return(countSize(root->left) + 1 + countSize(root->right));  
   //return count;
 };

int main()
{
  struct node *root = newNode(4);
  root->left        = newNode(2);
  root->right       = newNode(5);
  root->left->left  = newNode(1);
  root->left->right = newNode(3); 
 
  //printf("\n DFS Traversal\n");
  //dfs(root);
   cout<<countSize(root);
     
  getchar();
  return 0;
}  

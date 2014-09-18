#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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
 
 
void printLevelUsingDFS(node *root, int level)
{
     if ( root == NULL) return;
     if( level == 1)
     {
         cout<<root->data<<" "<<endl;
         }
         else
         {
             printLevelUsingDFS(root->left,level -1);
             printLevelUsingDFS(root->right,level -1);
             }
             };
 
 
/* Driver program to test above functions*/
int main()
{
  struct node *root = newNode(4);
  root->left        = newNode(2);
  root->right       = newNode(5);
  root->left->left  = newNode(1);
  root->left->right = newNode(3); 
 
  printf("\n Nodes at a given level\n");
  printLevelUsingDFS(root,1);
 
     
  getchar();
  return 0;
}  


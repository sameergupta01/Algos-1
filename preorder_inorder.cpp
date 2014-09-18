//BST using inorder/preorder sequence

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

//node struct

struct node
{
       node *left;
       node *right;
       char data;
       };
       


int searchNodeValueInInOrder(char value,char *Inorder,int start,int end)
{
    //we use start and end paramenter just to find the value in the new start and end instead of complete inrder array
    //new start and end values are updated every time from recurssion fn.
    for(int i = start; i<= end;i++)
    {
    if(Inorder[i] == value)
    {
                  return i;
                  }
                  }
                  return 0;
};

node* buildTree(char *inorder, char *preorder, int start, int end, int preOrderIndex)
{
if (start>end)
return NULL;

int nodeData = preorder[preOrderIndex];

node *p = new node();
p->left = NULL;
p->right = NULL;
p->data = nodeData;

if(start == end)
    return p;

int searchIndex = searchNodeValueInInOrder(nodeData, inorder,start,end);
preOrderIndex++;
p->left = buildTree(inorder,preorder,start,searchIndex-1,preOrderIndex);
preOrderIndex++;
p->right = buildTree(inorder,preorder,searchIndex+1,end,preOrderIndex);
return p;
};


/* This funtcion is here just to test buildTree() */
void printInorder(node* node)
{
  if (node == NULL)
     return;
 
  /* first recur on left child */
  printInorder(node->left);
 
  /* then print the data of node */
  printf("%c ", node->data);
 
  /* now recur on right child */
  printInorder(node->right);
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
             }
 
/* Driver program to test above functions */
int main()
{
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  struct node *root = buildTree(in, pre, 0, len - 1,0);
 
  /* Let us test the built tree by printing Insorder traversal */
  printf("\n Inorder traversal of the constructed tree is \n");
  printInorder(root);
    printf("\n Nodes at a given level\n");
  printLevelUsingDFS(root,2);
  getchar();
};

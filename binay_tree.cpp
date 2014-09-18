#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include <conio.h>

using namespace std;


struct tree_el {
   int val;
   struct tree_el * right, * left;
};

typedef struct tree_el node;

void insert(node ** tree, node * item) {
   if(!(*tree)) {
      *tree = item;
      return;
   }
   if(item->val<(*tree)->val)
      insert(&(*tree)->left, item);
   else if(item->val>(*tree)->val)
      insert(&(*tree)->right, item);
}

void printout(node * tree) {
   if(tree->left) printout(tree->left);
   printf("%d\n",tree->val);
   if(tree->right) printout(tree->right);
}


int getRightMostDeepestNode(node *root)
{
    //use DFS for this..
    
};

int main() {
   node * curr, * root;
   int i;

   root = NULL;

   for(i=1;i<=10;i++) {
      curr = (node *)malloc(sizeof(node));
      curr->left = curr->right = NULL;
      curr->val = i;//rand();
      insert(&root, curr);
   }

   printout(root);
   int rightMostNode = 0;
   rightMostNode = getRightMostDeepestNode(root);
   cout<<getch();
   return 0;
}

#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stack>
#include <algorithm>
#include <stdlib.h>
#include <vector>

using namespace std;

struct node 
{
    int data;
    struct node* left;
    struct node* right;
};

int maxHeight(node *p) {
  if (!p) return 0;
  
  int left_height = maxHeight(p->left);
  cout<<"left_height: "<<left_height<<endl;

  int right_height = maxHeight(p->right);
  cout<<"right_height: "<<right_height<<endl;
    
  return (left_height > right_height) ? left_height + 1 : right_height + 1;
}

struct node* newNode(int data) 
{
    struct node* node = (struct node*)
                                malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
   
    return(node);
}
   
int main()
{
    struct node *root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5); 
   
    printf("Hight of tree is %d", maxHeight(root));
   
    getchar();
    return 0;
}

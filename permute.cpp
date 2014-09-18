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

void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *s,int start,int end)
{
     if(start == end)
     {
              for(int i=0;i<=end;i++)
              cout<<s[i];
              cout<<endl;
              }
              else{
              for(int i=start;i<=end;i++){
              swap(s+start,s+i);
              permute(s,start+1,end);
              //swap(s+start,s+i);
              }}
 }
 
 int main()
 {
     char s[] = "SAM";
     permute(s,0,2);
     cout<<getch();
     return 0;
 }

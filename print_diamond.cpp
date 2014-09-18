#include<iostream>
#include<conio.h>

using namespace std;


void printstar(int n)
{
     if(n > 1 )
     {
     printstar(n-1);
     }
     for(int i= 0;i<n;i++){
     cout<<"*";}
     cout<<endl;
     };
     
     


int main()
{
    printstar(5);
    cout<<getch();
    return 0;
};


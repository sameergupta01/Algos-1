#include<iostream>
#include<conio.h>
using namespace std;


void insertion_sort(int s[],int n)
{
     int i,j;
     for(i=0;i<n;i++)
     {
         j=i;
         if(j>0 && (s[j]<s[j-1]))    
         {
                int temp;
                temp = s[j-1];
                s[j-1]=s[j];
                s[j]=temp;
                j=j-1;
                }
             }
 };

int main()
{
    int s[3];
    cout<<"Enter list of 3 intergers"<<endl;
    cin>>s[0];
    cin>>s[1];
    cin>>s[2];
    insertion_sort(s,3);
    cout<<"s[0]"<<s[0]<<endl;
        cout<<"s[1]"<<s[1]<<endl;
            cout<<"s[2]"<<s[2]<<endl;
    cout<<getch();
};


#include<iostream>
#include<conio.h>
using namespace std;

int quicksort_partation(int A[],int p, int q)
{
    int key = A[p];
    int i = p;
    int j = i+1;
    for(j = i+1;j<=q;j++)
    {
          if(A[j]<=key)
          {
                       i++;
                       int temp;
                       temp = A[i];
                       A[i] = A[j];
                       A[j] = temp;
                       }
                       }
                       int temp = A[i];
                       A[i] = key;
                       A[p] = temp;
                       return i;
          
};

void quicksort(int A[],int p,int q)
{
     if (p < q)
     {
     int r=0;
     r = quicksort_partation(A,p,q);
     quicksort(A,p,r-1);
     quicksort(A,r+1,q);
     }
 }
int main()
{
    int a[5];
    a[0] = 10;
    a[1] = 20;
    a[2] = 5;
    a[3] = 40;
    a[4] = 1;
    quicksort(a,0,4);
    for(int i = 0;i<5;i++)
    cout<<a[i]<<endl;
    cout<<getch();
    return 0;
};




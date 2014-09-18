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

#define min(a,b) (a<b?a:b)
#define V 8

#define toAscii(A,len)   for(int i=0; i<len; A[i++]+='0');
#define fromAscii(A,len) for(int i=0; i<len; A[i++]-='0');
    int number = 3;
    
int binaryS(int a[], int low,int end)
{
    if(low > end)
    {
           cout<<low<<" "<<endl;
           return low;
              
              }
              int mid = low+ (end - low)/2;
              if(a[mid] < number)
                                          binaryS(a,mid+1,end);


              else
              binaryS(a,low,mid-1);              

    
};

int main(){
    

    int array[]= {1,2,3,3,3,3,4,4,4,5,6,7};
    int size = sizeof(array)/sizeof(int);
    int low = 0;
    int end = size-1;
    cout<<binaryS(array,low,end);          
    cout<<getch();
    return 0;
}

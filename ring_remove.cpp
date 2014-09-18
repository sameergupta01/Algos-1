#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stack>
using namespace std;

#define min(a,b) (a<b?a:b)
#define V 8


int ring_remove(int n,int k)
{
    int a[] = {0,1,2,3,4};
               if(n == 1)
               return 0;

        return (ring_remove(n-1,k)+k)%n;
             
    
}



int main(){
    

    
    cout<<ring_remove(5,3);
    
    cout<<getch();
    return 0;
}

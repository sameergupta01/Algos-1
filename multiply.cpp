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
void multiply(int *A, int*B)
{
	int n= 3;
	int m = 3;
	int res[6];
	for(int k=0;k<6;k++)
	res[k] = 0;
	for(int i=n-1; i>=0; i--)
		for(int j=m-1; j>=0; j--)
		{
			res[i+j+1]+=(A[i] * B[j]);
			res[i+j]+=res[i+j+1]/10;
			res[i+j+1] = res[i+j+1]%10;
		}
	
	  for(int i=0;i<6;i++)
    cout<<res[i]<<endl;
}

int main(){
    
    int a[3] = {1,1,1};
    int b[3] = {2,2,2};
    multiply(a,b);
  
    cout<<getch();
    return 0;
}

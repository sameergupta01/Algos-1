#include <iostream>
#include <conio.h>

using namespace std;

int max(int a, int b) { return (a > b)? a : b; }

void P(int *b)
{
    int p[4][9];
    int rows = 4;
    int col = 9;
    
    for(int k=0;k<4;k++)
    {
            for(int l=0;l<9;l++)
            {
            p[k][l] = 0;
            }
            }
    
    
    for(int i =0;i<4;i++)
    p[0][i] = 0;
    
    for(int j =0;j<9;j++)
    p[j][0] = 1;
    
    for(int k=1;k<4;k++)
    {
            for(int l=1;l<9;l++)
            {
                    p[k][l] = max((p[k-1][l]),(p[k-1][l-b[k]]));
                    }
                    }
    
    for(int k=0;k<4;k++)
    {
            for(int l=0;l<9;l++)
            {
                    cout<<p[k][l]<<" ";
                    }
                    cout<<endl;
                    }
    
    
}


int main()
{
    int b[4];
    b[0]=5;
    b[1]=1;
    b[2]=2;
    b[3]=1;
    
  
    P(b);
    cout<<getch();
    
 }

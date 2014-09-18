#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    return 0;
}

void matrix_multiplication(int a[][],int b[][])
{
     int c[100][100];
     for(int i = 0; i< 100 ; i++)
     {
             for(int j=0;j < 100; j++)
             {
                     c[i][j] = 0;
                     }
                     }
                     
                     
                     for(int i=0;i<100;i++)
                     {
                             for(int j=0;j<100;j++)
                             {
                                     for(int k=0;k<100;k++)
                                     {
                                             c[i][j] = a[i][k]*b[k][j];
                                             }
                                             }
                                             }
                     
 }

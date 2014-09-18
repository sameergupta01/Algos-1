#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    int a[] = {1, 17, 5, 10, 13, 15, 10, 5, 16, 8};
    int d[10];
    int i;
    int len=0;
    for(int i=1;i<10;i++)
    {
            d[i-1] = a[i] - a[i-1];
            }
            
                for(int i=1;i<10;i++)
                    {
            cout<<d[i] <<endl;
                        }


            int ii=0;
            int checker = d[ii];
            ii = ii+1;
            while((ii)<10)
            {
                                                                   cout<<"d[ii]"<<d[ii]<<endl;
                                         cout<<"checker"<<checker<<endl;

                        if(d[ii]*checker < 0)
                        {
                        checker *= -1; 
                        len++;
                        }
                        cout<<"ii"<<ii<<endl;
                        ii++;
                        }
                        cout<<"length"<<len;
                        cout<<getch();
    return 0;
};

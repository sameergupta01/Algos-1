#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void permutation(string s,bool *b,int index_s,int index_e)
{
     if(index_s == index_e)
     {
                cout<<s<<endl;
                }
                else
                {
                    for(int i =0;i<4;i++)
                    {
                            if(b[i])
                            continue;
                            else
                            
                            }
                }
 }

int main()
{
    string s = "abcd";
    bool b[4] = {0,0,0,0};
    int start = 0;
    int end = 3;
    permutation(s,b,0,3);
    
    return 0;
}

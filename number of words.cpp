#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
    int count = 0;
    cout<<"Prgm is to count number of words"<<endl;
    char *s =  "Prgm is to count number of words";
    while(*s != '\0')
    {
    cout<<*s<<endl;
            if(*s == ' ')
            {
                  if (*(s+1) == ' ')
                  {
                             s++;
                             }
                             else
                             {
                                 count++;
                             }
                  }
                  s++;
            }
            cout<<"Count is "<<count<<endl;
            cout<<getch();
}

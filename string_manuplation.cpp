#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

using namespace std;


char * updateString(string s)
{
     int character,digit;
     char *a = new char(100);
     character = 0;
     digit = 1;
     int i = 0;
     while(i < s.size())
     {
             if (isdigit(s[i]))
             {
                a[digit] = s[i];
                digit +=2;
                }
                else
                {
                    a[character] = s[i];
                    character +=2;
                }              
                i++;
                }
                a[digit] = '\0';
                return a;
 };


int main()
{
    string s = "abcd1234efgh7689";
    cout<<"Output: ";
    char  *a= updateString(s);
    for(int i = 0;i< strlen(a)-1;i++)
    cout<<a[i];
    cout<<getch();
    return 0;
    
};

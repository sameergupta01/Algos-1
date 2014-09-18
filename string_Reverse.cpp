#include <iostream>
#include <conio.h>

using namespace std;


char *reverse(char *s)
{
     int n = 7;
     int i = 0;
     while(n>=i){
                 //cout<<"i: "<<s[i]<<endl;
                 //cout<<"n: "<<s[n]<<endl;
    char temp = s[i];

     s[i] = s[n];

     s[n] = temp;
     i++;
     n--;
     }
     return s;
 }

int main()
{
    char s[] = "aabbccdd";
    char *p = reverse(s);
    for(int i = 0;i<8;i++)
    cout<<p[i];
    cout<<getch();
    return 0;
}





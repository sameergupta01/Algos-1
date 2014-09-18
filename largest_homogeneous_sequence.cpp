#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int string_start_index(char *s,char *f)
{
    char current;
    int count = 0;
    int final_count = 0;
    char final_char;
    current = s[0];
    for(int i=0;i<strlen(s);i++)
    {
            
            if(s[i] == current)
            {
                  count++;  
                    }
                    else
                    {
                    if(final_count<=count){
                    final_count = count;
                    final_char = s[i-1];
                    *f = final_char;
                    }
                    current = s[i];
                    count = 0;
                    }
            }
            return final_count;
};


int main()
{
    char s[]="AAABCC";
    char f;
    int a = string_start_index(s,&f);
    cout<<"Index is : "<<a<<" "<<f<<endl;
    cout<<getch();
    return 0;
}

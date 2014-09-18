#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct time_direction
{
       int time;
       bool in;
       };

int main()
{
    time_direction *td = new time_direction();
    td->time = 6;
    td->in = 0;
    time_direction *td1 = new time_direction();
    td1->time = 7;
    td1->in = 1;
    cout<<"we are done"<<endl;
    
};


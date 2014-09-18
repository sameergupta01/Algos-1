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



int main()
{
    char *s = "SAMEER IS A GOOD BOY";
    char *str = new char[strlen(s)];
    strcpy(str,s);
    char *p = strtok(str," ");
    //p=strtok(NULL," ");
    cout<<p;
    cout<<getch();
    return 0;
}

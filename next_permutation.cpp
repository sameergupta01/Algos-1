#include <iostream>
#include <conio.h>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <vector>

using namespace std;

int main()
{
    vector<char> t;
    t.push_back('a');
    t.push_back('b');
    t.push_back('c');
    do
    {
                     cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
                     }
    while(next_permutation(t.begin(),t.end()));
    
    cout<<getch();
    return 0;
}

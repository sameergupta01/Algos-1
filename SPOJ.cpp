#include <iostream>
#include <conio.h>

using namespace std;

int reverseNumber(int a)
{
    int newNumber = 0;
    while(a%10 == 0)
    a = a/10;

    while( a > 0){
    newNumber += a%10;
    newNumber *= 10;
    a = a/10;
}
newNumber = newNumber/10;
return newNumber;
}
    
    
    

int main()
{

    int a = reverseNumber(4358);
    int b = reverseNumber(754);
    int c = reverseNumber(a+b);
    cout<<"c"<<c<<"\n";
    cout<<getch();
}

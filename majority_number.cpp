#include <iostream>
#include <conio.h>

using namespace std;

int findCandidate(int *a,int n)
{    //Initialize index and count of majority element
    int maj_index = 0;
    int count = 1;
    int i;
    for (i=1;i<n;i++) {
      if (a[maj_index] == a[i])
          count++;
      else
          count--;

      if (count == 0) {
          maj_index = i;
          count = 1;
      }
    }
    return a[maj_index];
};

int main()
{
    int n;
    cout<<"Please enter the count of numbers\n";
    cin>>n;
    int a[n];
    cout<<"Enter Numbers\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b;
    b = findCandidate(a,n);
    cout<<"Majority number: "<<b<<endl;
    cout<<getch();
    return 0;
};

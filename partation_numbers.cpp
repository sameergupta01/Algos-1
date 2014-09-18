#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

void partition(int n){
   int *a = new int(n);
   for(int i = 0;i<n;i++)
   a[i] = 0;
    int k = 1;
    a[0] = 0;
    a[1] = n;
    int x,y;
    while (k != 0){
        x = a[k - 1] + 1;
        cout<<"x"<<x<<endl;
        y = a[k] - 1;
        cout<<"y"<<y<<endl;
        k -= 1;
        cout<<"k"<<k<<endl;
        while (x <= y){
            a[k] = x;
            y -= x;
            k += 1;}
        a[k] = x + y;
        for(int j=0;j<k+1;j++)
        cout<< a[j]<<" ";
        cout<<endl;
    }
}

int main(){
    int sum = 7;

    partition(sum);
    cout<<getch();
return 0;
}



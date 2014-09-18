#include <iostream>
#include <conio.h>

using namespace std;

int min(int a, int b,int c,int d)
{
    cout<<"a"<<a<<"b"<<b<<"c"<<c<<"d"<<d<<endl;
    int min_value = a;
    if(b<a && b<c && b<d)
    min_value = b;
    if(c<b && c<a && c<d)
    min_value = c;
    if(d<b && d<a && d<c)
        min_value = d;
        cout<<"min_value: "<<min_value<<endl;
    return min_value;
}

int minStampQuantity(int value,int *k)
{
    if(value <= 10 || value == 50)
    return k[value];
    else
    {
        for(int j = 11;j<=value;j++){
        if(j<50){
            k[j] = 1+ min(k[j-1],k[j-7],k[j-10],999);}
        if(j>50)        {
            k[j] = 1+ min(k[j-1],k[j-7],k[j-10],k[j-50]);
            }
            cout<<"k["<<j<<"]: "<<k[j]<<endl;

}
}
    return k[value];
}

int main()
{
    //stamp values avail
    //1,7,10
    int value = 57;
    int k[55];
    
    for(int i=1;i<8;i++)
    k[i] = i;
    
    k[8] = 2;
    k[9] = 2;
    
    k[10] = 1;
    k[50] = 1;
    cout<<"minStampQuantity: "<<minStampQuantity(value,k)<<endl;
    cout<<getch();
    return 0;
}

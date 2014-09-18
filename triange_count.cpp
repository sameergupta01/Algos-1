#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int comp(const void* a, const void* b)
{  
    cout<<((int*)a)[1];
    cout<<"\n"<<*(int*)b<<"\n";
    return *(int*)a > *(int*)b ; }

void calculate_triangles()
{
 };

int main()
{
    int arr[] = {1100,220,233,1244,155};
    qsort(arr, 5, sizeof( arr[0] ), comp);
    //for(int i=0;i<5;i++)
    //cout<<arr[i]<< " ";
    cout<<getch();
    return 0;
}

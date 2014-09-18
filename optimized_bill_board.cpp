#include <iostream>
#include <conio.h>

using namespace std;

int max(int a,int b)
{
    if(a>b)
     return a;
     else
     return b;
};

int getLowerRevenueValue(int currentPositionIndex,int *position)
{    
    int currentPositionValue = position[currentPositionIndex];
    int new_index = currentPositionIndex;
    while((currentPositionValue - position[new_index] <= 5))
    if(new_index > 0)
    new_index--;
    else
    return -1;
    
    return new_index;
};


int *optimizedBillBoard(int *position, int *revenue)
{
    int *total_sum = new int(6);
    total_sum[-1] = 0;
        for(int i = 0;i<=5;i++)
        total_sum[i] = 0;
    
    for(int i = 0;i<=5;i++)
    {
            int getLowerRevenueIndex = getLowerRevenueValue(i,position);
    total_sum[i] = max(revenue[i]+total_sum[getLowerRevenueIndex],total_sum[i-1]);
}
    return total_sum;
};


int main()
{
    int x[6] = {6,7,12,13,14};
    int r[6] = {5,6,5,3,1};
    int *a = optimizedBillBoard(x,r);
    cout<<"optimizedBillBoard: "<<a[5]<<endl;
    cout<<getch();
    return 0;
}

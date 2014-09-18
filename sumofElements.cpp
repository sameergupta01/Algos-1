#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    int arr[] = {10, 2, 3, 4, 5, 9, 7, 8};
    int sum = 23;
    
    int length = 8;
    for(int i=0;i<length;i++)
    {
            for(int j=i+1;j<length;j++)
            {
                    for(int k=j+1;k<length;k++)
                    {
                            if(arr[i]+arr[j]+arr[k] == sum)
                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                            }
                            }
                            }
                            cout<<getch();
    
    return 0;
}

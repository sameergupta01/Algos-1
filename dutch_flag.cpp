#include <iostream>
#include <conio.h>


using namespace std;

void swap(int *a,int *b)
{
 *a = *a^*b;
 *b = *a^*b;
 *a = *a^*b;    
 }

void DNF(int *a)
{
     int low = 0, mid = 0,high = 9;
     while(mid < high)
     {
               switch(a[mid]){
                              case 0:
                                   //int temp = a[low];
                                   //a[low] = a[mid];
                                   //a[mid] = temp;
                                   swap(a[low],a[mid]);
                                   low++;
                                   mid++;
                                   break;

                                   case 1:
                                        mid++;
                                        break;

                                        case 2:
                                           
                                   //int temp2 = a[high];
                                   //a[high] = a[mid];
                                   //a[mid] = temp2;
                                            swap(a[mid],a[high]);
                                             mid++;
                                             high--;
                                         
                              }     
               }
               for(int i=0;i<=9;i++){
                       cout<<a[i]<<endl;
                       }
 }

int main()
{
    int a[] = {0,0,0,1,1,1,2,2,2,2};
    DNF(a);
    cout<<getch();
    return 0;
}

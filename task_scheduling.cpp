#include <iostream>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>

using namespace std;

struct task_st
{
       int task;
       int penality;
       int deadline;
       bool isPending;
       };

int Compare(const void *a,const void *b)
{
    task_st *aa,*bb;
    aa = (task_st*)a;
    bb= (task_st*)b;
    if(aa->penality > bb->penality)
    return -1;
    else
    return 1;
};

int main()
{
    int task[] = {1,2,3,4,5,6,7};
    int penality[]={70,60,50,40,30,20,10};
    int deadline[]={4,2,4,3,1,4,6};
    
    int final_task[7];
    
    for(int i=0;i<7;i++)
    {
              final_task[i]=0;
            }
    
    
    task_st s[7];
    
    for(int i=0;i<7;i++)
    {
            s[i].task = task[i];
            s[i].penality = penality[i];
            s[i].deadline = deadline[i];
            s[i].isPending = true;
            }
            
    qsort(s,7,sizeof(task_st),Compare);
    
    for(int i=0;i<7;i++)
    {
         int start=0;
         int end=s[i].deadline-1;
       while(end >= start)
       {
                 if(final_task[end] == 0)
                 {
                    final_task[end] = s[i].task;
                    s[i].isPending = false;
                    break;                
                                    }
                                    end--;
                 }
                 if(s[i].isPending)
                 {
                                   end=7;
                                   while(final_task[end] != 0)
                                   {
                                                                   end--;
                                                         }
                                                         final_task[end] = s[i].task;
                                   }
    }
    
    
    
    
    for(int i=0;i<7;i++)
    {
              cout<<final_task[i]<<"  "<<s[final_task[i]].penality<<endl;
            }
    
    
    
    cout<<getch();
    return 0;
}

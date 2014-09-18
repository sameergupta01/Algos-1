#include <cstdio>
#include <string>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stack>
#include <algorithm>
#include <stdlib.h>
using namespace std;

#define min(a,b) (a<b?a:b)
#define V 8

//count high count number from a stream
//POC of algo

struct topfive
{
       int frequecy;
       string word;
       int error_count;
       };


int compare(const void *a, const void  *b)
{
    topfive *aa = (topfive *)a;
    topfive *bb = (topfive *)b;
    if(aa->frequecy > bb->frequecy)
    return -1;
    else 
    return 1;
    return 0;
    
};


void sort(topfive *top)
{
     qsort(top,10,sizeof(topfive),compare);
 }

void gettopfive(string s, topfive *top)
{
    int i=0;
    int counter = 0;
    while(s[i] != '\0')
    {
            char sw[100];   
            int j=0;
            memset(sw,0,sizeof(sw));
            while(s[i] != ' ' && s[i] != '\0')
            sw[j++] = s[i++];
            if(s[i] != '\0')
            i++;
            //cout<<sw<<endl;
            //if(counter >=5)
            sort(top);
            counter++;
            bool isword = false;
            for(int i=0;i<10;i++)
            {
                    if(top[i].word == sw){
//                                   cout<<"f"<<top[i].frequecy;
                    top[i].frequecy++;
                    isword = true;
                    break;}
                    }
            if(!isword){
            int frequency = 0;
            
             frequency = top[9].frequecy;
            top[9].frequecy++;
            top[9].error_count = frequency;
            top[9].word = sw;
            }
            }
            sort(top);
            
}


int main(){
    
    topfive top[10];
    
    for(int i=0;i<10;i++){
    top[i].word="";
    top[i].frequecy=0;
    top[i].error_count=0;}
    
    string s = "Design an algorithm to sort an array algorithm whose first n-sqrt(n) elements are algorithm already sorted. What is the complexity of the algorithm";
    gettopfive(s,top);
    for(int i=0;i<10;i++){
    cout<<"word: "<<top[i].word;
    cout<<" frequency: "<<top[i].frequecy;
    cout<<" error :"<<top[i].error_count<<endl;}
    cout<<getch();
    return 0;
}

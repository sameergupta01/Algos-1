#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

set < vector <int> > seqset;

void swap(vector <int> sequence,int start,int end)
{
int temp = sequence[start];
sequence[start] = sequence[end];
sequence[end] = temp;
}

int totalSwap(vector <int> sequence,int start,int end)
{
	if(start == end)
	{
	seqset.insert(sequence);
	}

		for(int i=0;i<=end;i++)
		{
		swap(sequence,start,i);
		totalSwap(sequence,start+1,end);
		swap(sequence,i,start);
		}
		return seqset.size();
	
}
	int find(vector <int> sequence) {
	int size = sequence.size()-1;
    return totalSwap(sequence,0,size);		
	}
	
	int main()
	{
        vector <int> p;
        p.push_back(4);
        p.push_back(7);
        p.push_back(4);
        cout<<find(p);
        cout<<getch();
        return 0;
        
        }

#include <vector>
#include <list>
#include <map>
#include <set>
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
 
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define UNIQ(v) sort(ALL(v)),v.erase(unique(ALL(v)),(v).end())
 


string getColor(long long r, long long g, long long b, long long k) 
{
  vector< pair<long long, string> > v;
  v.push_back(make_pair(r, "RED"));
  v.push_back(make_pair(g, "GREEN"));
  v.push_back(make_pair(b, "BLUE"));
  
  --k;
  while (k >= v.size())
  {
    long long d = k / v.size();
    d = min(d, min_element(ALL(v))->first);
    for (size_t i = 0; i < v.size(); ++i)
      v[i].first -= d;
    k -= d * v.size();
    vector< pair<long long, string> >:: iterator it;
    while (!(it = min_element(ALL(v)))->first)
      v.erase(it);
  }
  return v[k].second;
}
 
 
int main()
{
    cout<<getColor(1,1,1,3);
    cout<<getch();
    return 0;
}

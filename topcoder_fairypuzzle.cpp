#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <conio.h>

using namespace std;
 
 
   void UpdateIsProtected(bool isProtected[],int j,int size, vector<string> love)
  {

  string loveArrayRow = love[j];  
  int i=0;
  for(i=0;i<size;i++)
  {
  if(loveArrayRow[i] == 'Y')
  {isProtected[i] = true;
  UpdateIsProtected(isProtected,i,size,love);
  }
  }
  };
  
  
  
  int maxMagicalGirls(vector <string> love)
  {
  int sizeOfLoveMatrix = love.size();
  bool isMagical[sizeOfLoveMatrix],isProtected[sizeOfLoveMatrix];
 int totalMagicalGirls = 0;
  int i=0,j=0;
   for(i=0;i<sizeOfLoveMatrix;i++){
   isMagical[i] = false;
   isProtected[i] = false;
   }
   //set 1st to true
   for(i=0;i<sizeOfLoveMatrix;i++){
   
   	   	if(isMagical[i] == false && isProtected[i] == false)
		   {	isMagical[i] = true;
			totalMagicalGirls++;
			string loveOfi = love[i];
			
      for(j=0;j<sizeOfLoveMatrix;j++){
	   	
	   	if(loveOfi[j] == 'Y')
	   	isProtected[j] = true;
	   	UpdateIsProtected(isProtected,j,sizeOfLoveMatrix,love);
   		}
   		}
   }
   return totalMagicalGirls;
  };
  
 
int main()
{
       vector<string> a; 
       a.push_back("NYN");
        a.push_back("NNY");
        a.push_back("NNN");
    int ab =maxMagicalGirls(a);
    cout<<ab; 
    cout<<getch();
};

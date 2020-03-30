#include<iostream>
using namespace std; 
int areSame( int s[],int n) 
{ 
   int i,cnt;
    for( i=0;i<n-1;i++) 
    {    
      if(s[i]==s[i+1]) 
      {  
         cnt=1; 
         continue;
      } 
      else
      {
         cnt=0;
         break;
      }
    }   
    if(cnt)
      return 1;
   else
      return 0;
} 
int main() 
{ 
   int s[]={2,2,2,3};
   int n=4;
   if(areSame(s,n)) 
      cout<<"All Elements are Same"; 
   else
      cout<<"Not all Elements are Same"; 
} 
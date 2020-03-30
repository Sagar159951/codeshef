#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int areSame( vector<int> &s,int n) 
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
int mvalue(vector<int> &s,int n)
{
   int num=0;
   int y1=0;
   for(int x=0;x<s.size();x++)
   {    
      if(num<s[x])
      {
         y1=x;
        // cout<<endl<<"value of y: "<<y1;
         num=s[x];
      }
   }
  // cout<<endl<<"its mvalue: "<<y1;
   return y1;
}
int main()
{
   int t;
   cin>>t;
   int n,num=0,w;
   vector<int> cnt(t);
   for(int q=0;q<t;q++)
   { 
      cin>>n;
      vector<int> s(n);
      for(int x=0;x<n;x++)
         cin>>s[x];   
      cnt[q]=0;
      do
      {
         w=mvalue(s,n);
         if(!areSame(s,n))
         {
            cnt[q]=cnt[q]+1;
            for(int i=0;i<n&&i!=w;i++)
               s[i]=s[i]+1;
         }
      } while (!areSame(s,n));
      s.clear();
   }
   for(int q=0;q<t;q++)
      cout<<endl<<cnt[q];
   
}
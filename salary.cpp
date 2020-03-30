#include<iostream>
#include<bits/stdc++.h>
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
int mvalue(int s[],int n)
{
   int num=0,y=0;
   for(int x=0;x<n;x++)
   {
      if(num<s[x])
      {
         y=x;
         num=s[x];
      }
   }
   return y;
}
int main()
{
   int t;
   cin>>t;
   int n,num=0,w,cnt[100];
   int s[100];
   for(int q=0;q<t;q++)
   { 
      cin>>n;
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
   }
   for(int q=0;q<t;q++)
      cout<<endl<<cnt[q];
   
}
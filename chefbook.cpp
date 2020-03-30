#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t,x,y,k,n;
    cin>>t;
    vector<int> a(t);
    int r,s;
    for(int z=0;z<t;z++)
    {
        cin>>x>>y>>k>>n;
        for(int q=0;q<n;q++)
        {
            cin>>r>>s;
            if( r>=(x-y) && s<=k )
                a[z]=1;
            else
                a[z]=0;
        }
    }
    for(int q=0;q<t;q++)
    {
        if(a[q])
            cout<<endl<<"LuckyChef";
        else
            cout<<endl<<"UnluckyChef";   
    }
}

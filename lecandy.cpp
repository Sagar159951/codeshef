#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,sum=0,q;
    vector<int> a;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        cin>>n>>c;
        for(int y=0;y<n;y++)
        {
            cin>>q;
            sum+=q;
        }
        if(sum<c)
            a.push_back(1);
        else
            a.push_back(0);
    }
    for(auto x : a)
    {
        if(x)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
}
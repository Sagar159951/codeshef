#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mutation(vector<int> a,int n,int k)
{
    int cnt=0;
    for(int x=0;x<n;x++)
        if((a[x]+k)%7==0)
            cnt++;
    return cnt;
}
int main()
{
    int t,n,k;
    cin>>t;
    vector<int> b(t);
    for(int q=0;q<t;q++)
    {
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        b[q]=mutation(a,n,k);
    }
    for(int q=0;q<t;q++)
        cout<<endl<<b[q];
}
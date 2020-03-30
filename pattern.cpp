#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<n+(i-1);
        }
        cout<<endl;
    }
    for(int i=(m-1);i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<n+(i-1);
        }
        cout<<endl;
    }
    return 0;
}
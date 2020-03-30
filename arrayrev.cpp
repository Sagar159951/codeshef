#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    for(int j=0,e=1;j<(n/2);j++,e++)
    {
        s=a[n-e];
        a[n-e]=a[j];
        a[j]=s;
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
}
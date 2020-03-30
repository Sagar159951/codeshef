#include<iostream>
using namespace std;
int n;
int main()
{   
    
    cout<<"enter the size of arry:";
    cin>>n;
    int a[n];
    cout<<"enter the elements of arry"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<n; j++)
    {
        if(a[j]==0)
        {
            for(int k=j; k<(n-1); k++)
            {
                a[k]=a[k+1];
                
            }
            a[n-1]=0;
        }
    }
    for(int s=0; s<n; s++)
    {
        cout<<a[s]<<" ";
    }
    
    return(0);
} 
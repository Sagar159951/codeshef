#include<iostream>
using namespace std;
int main()
{   int t,n,m,q;
    //enter the num of test cases
    cin>>t;
     int count[t];
    for(int i=0;i<t;i++)
    {   count[i]=0;
        //enter the no. of pages in book
        cin>>n;
        //enter the no. of torn pages
        cin>>m;
        //enter the no. of readers
        cin>>q; 
        int a[m];
        //enter the page no. which are torn out
        for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }
        int r[q];
        //enter the index of readers
        for(int j=0;j<q;j++)
        {   
            cin>>r[j];
        }  
        //oepration as required
        for(int k=0;k<q;k++)
        
            for(int j=r[k] ; j<=n ; j=(j+r[k]))
            {   
                count[i]++;
                for(int x=0;x<m;x++)
                    
                    if(j==a[x])
                    {
                        count[i]--;
                        break;  
                    }
            }   
    }
    //output operation
    for(int i=0;i<t;i++)
    {
        cout<<"Case #"<<i+1<<": "<<count[i]<<endl;
    }
    return 0;
}
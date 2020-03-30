#include<iostream>
#include<string>
using namespace std;
int main()
{
    char A[100]="naman";
    int l=14,n,m,x,y,q;
    char A2[100];
    for( x=0; x<l; x++)
    {
        for( y=l-1; y>x; y--)
        {
            if(A[y]==A[x])
            {
                for(q=0,n=x,m=y; m>=x; n++,m--,q++)
                {
                    if(A[m]!=A[n])
                    {
                        break;
                    }
                    else
                    {
                        A2[q]=A[n];
                        A2[m-x]=A[m];
                    }
                    
                }
            }
        }
        for(int z=0; z<n; z++)
        {
            cout<<A2[z];
        }
    }

}
#include<iostream>
using namespace std;
int main()
{
    int m,l;
    int sum=0,max=0;
    int a[1000];
    int k[1000];

    cin>>m>>l;

    for(int x=0;x<l;x++)
    {
	    cin>>a[x];
    }

    for(int i=(l-1);i>=0;i--)
    {
	    if(a[i]<=m)
	    {
	        for(int j=i;j>=0;j--)
	        {
		        sum+=a[j];
		        if(sum>m)
		        {
		            sum-=a[j];
		        }
	        }
	    }
	    k[i]=sum;
	    sum=0;
    }

    max=k[0];
    for(int z=1;z<l;z++)
    {
	    if(max<k[z])
	    {
	        max=k[z];
	    }
    }
    cout<<"\nmax no.of slices:"<<max;
    return (0);
}

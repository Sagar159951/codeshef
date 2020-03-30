#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int k[T];
    int count[T];
    for( int i=0 ; i<T ; i++ )
    {
        k[i]=1000;
        int N , M ;
        cin>>N;
        cin>>M;
        int A[N];
        for( int j=0 ; j<N ; j++ )
        {
            cin>>A[j];
        }
        while(k>0)
        {
            count[i]=0;
            for( int x=0 ; x<N ; x++)
            {
                count[i]=count[i]+int(k^A[x]);
            }
            if(count[i]<=M)
                break;
        }
        else
            k[i]=-1;
    }
    for( int z=0 ; z<T ; z++ )
        cout<<"Case #"<<z<<": "<<k[z];
    return 0;
}
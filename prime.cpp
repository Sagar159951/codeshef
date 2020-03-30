#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int n,x;
    int cnt=0;
    cin>>n;
    for(x=2; x<=sqrt(n); x++)
    {
        if(n%x==0)
        {
            cnt=1;
        }
    }
    if(cnt)
        cout<<fixed<<"not prime";
    else
        cout<<fixed<<"prime";
    
}
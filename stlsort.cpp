#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int y;
    cout<<"Enter the size:";
    cin>>y;
    cout<<"Enter the elements:";
    for(int q=0;q<y;q++)
        cin>>a[q];
    sort(a,a+y);
    for(int q=0;q<y;q++)
        cout<<endl<<a[q];
}
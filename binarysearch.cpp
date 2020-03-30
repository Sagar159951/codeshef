#include<iostream>
using namespace std;
int bsearch(int a[100], int x, int y, int n)
{
    int num=n;
    int high=y;
    int low=x;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(num==a[mid])
        {
            return mid;
        }    
        else if (num<a[mid])
        {
            high=mid-1;
        }
        else if(num>a[mid])
        {
            low=mid+1;
        }
        
    }
    return -1;
};
int main()
{
    int a[100];
    int x=0,y,n;
    cout<<"Enter the size of the arry:";
    cin>>y;
    cout<<"enter the no. to be found:";
    cin>>n;
    cout<<"enter the elements in sorted order:";
    for(int q=0; q<y; q++)
    {
        cin>>a[q];
    }
    cout<<bsearch(a,x,y,n);
}
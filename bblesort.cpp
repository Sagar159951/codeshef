#include<iostream>
using namespace std;
void bblesort(int arr[100],int x,int y)
{
    for(int a=x;a<y;a++)
    {
        for(int b=x;b<y-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                int temp= arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
}
int main()
{
    int a[100];
    int x=0,y;
    cout<<"Enter the size:";
    cin>>y;
    cout<<"Enter the elements:";
    for(int q=0;q<y;q++)
        cin>>a[q];
    bblesort(a,x,y);
    for(int q=0;q<y;q++)
        cout<<endl<<a[q];
}
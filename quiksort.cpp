#include<iostream>
using namespace std;
 int partition(int arr[], int start, int end)
 {
    int pivotValue = arr[start];
    int pivotPosition = start;
     for (int i=start+1; i<end; i++)  
     {
        if (pivotValue > arr[i])
       {
          swap(arr[pivotPosition+1], arr[i]);
          swap(arr[pivotPosition] , arr[pivotPosition+1]);
          pivotPosition++;
       }
     }
    return pivotPosition;
  }
        

 void quickSort(int arr[], int low, int high)
 {
   if (low < high)
   {
      int pi = partition(arr, low, high);
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
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
    quickSort(a,x,y);
    for(int q=0;q<y;q++)
        cout<<endl<<a[q];
}
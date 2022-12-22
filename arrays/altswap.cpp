#include<iostream>
using namespace std;

void altSwap(int arr[], int n)
{
    for(int i=0; i<(n/2); i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int as[]={3,6,1,34,9,20,2};
    int n=sizeof(as)/sizeof(as[0]);
    
    altSwap(as, n);
    return 0;
}
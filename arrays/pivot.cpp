#include<iostream>
using namespace std;

int pivotFind(int arr[], int size)
{
    int s=0;
    int e=size-1;

    while(s<e)
    {
        int m=(s/2)+(e/2);
        if(arr[m]>arr[0])
            s=m+1;
        else
            e=m;
    }
    return s;
}
int binarySearch(int arr[], int n, int s, int e)
{
    int start=s;
    int end=e;
    int m=(start/2)+(end/2);

    while(start<end)
    {
        if(arr[m]==n)
            return m+1;

        if(arr[m]<n)
            start=m+1;
        else
            end=m;

         m=(start/2)+(end/2);
    }
    return -1;
}
int main()
{
    int arr[]={6,7,8,9,1,2,3}; //sorted and rotated array
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;

    int pivot=pivotFind(arr, size);
    cout<<"lower pivot point at "<<pivot<<endl;

    cout<<"enter number to be searched "<<endl;
    cin>>n;

    if(n>=arr[pivot] && n<=arr[size-1])
        cout<<binarySearch(arr, n, pivot, size-1);
    else
        cout<<binarySearch(arr, n, 0, pivot); //technically u send pivot-1
    return 0;
}
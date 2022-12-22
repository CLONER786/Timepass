#include<iostream>
using namespace std;

void triplet(int arr[], int n, int sum)
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
                if(arr[i]+arr[j]+arr[k]==sum)
                {
                    cout<<"triplet exists "<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    return;
                }
}
int main()
{
    int arr[]={35,55,72,33,21,32};
    int n=sizeof(arr)/sizeof(arr[0]), sum=100;

    triplet(arr, n, sum);
    return 0;
}
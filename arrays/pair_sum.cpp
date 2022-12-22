#include<iostream>
using namespace std;

void pairSum(int arr[], int n, int sum)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            if(arr[i]+arr[j]==sum)
            {
                cout<<"Pair exists ";
                return;
            }
    }
}
int main()
{
    int arr[]={2,51,16,49,0,67,38};
    int n=sizeof(arr)/sizeof(arr[0]), sum=100;

    pairSum(arr, n, sum);
    return 0;
}
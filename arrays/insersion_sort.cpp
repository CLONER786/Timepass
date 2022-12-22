#include<iostream>
using namespace std;

int inserSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int j,temp;
        temp = arr[i];
        for(j=i-1; j>=0; j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[5]={10,9,5,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    inserSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
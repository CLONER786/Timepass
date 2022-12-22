#include<iostream>
using namespace std;

void Duplicate(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                cout<<arr[i]<<" ";
    }
}
int main()
{
    int dup[]={55,47,77,55,77};
    int n=sizeof(dup)/sizeof(dup[0]);
    
    Duplicate(dup, n);
    return 0;
}
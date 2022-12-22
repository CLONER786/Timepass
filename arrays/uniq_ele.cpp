#include<iostream>
using namespace std;

int uniqEle(int arr[], int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans=ans^arr[i]; //xor logic -> xroing w/ 0 gives original number
    }                             //-> xronig w/ self gives 0;
    return ans;
}
int main()
{
    int uniq[]={55,47,77,55,77};
    int n=sizeof(uniq)/sizeof(uniq[0]);
    
    cout<<"Unique element "<<uniqEle(uniq, n);
    return 0;
}
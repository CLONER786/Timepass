#include<iostream>
using namespace std;

// mountArr(int arr[], int size)
// {
//     int s,m,e;
//     s=0;
//     e=size-1;

//     while(s<e)
//     {
//         m=s + (e-s)/2;
//         if(arr[m]>arr[m-1] && arr[m]>arr[m+1])
//             return arr[m];
//         else if(arr[m]>arr[m-1])
//             s=m+1;
//         else
//             e=m;
//     }
//     return -1;
// }

mountArr(int arr[], int size)
{
    int s,m,e;
    s=0;
    e=size-1;

    while(s<e)
    {
        m=s + (e-s)/2;
        if(arr[m]<arr[m+1])
            s=m+1;
        else if(arr[m]<arr[m-1])
            e=m;
        else
            return arr[m];
    }
    return -1;
}
int main()
{
    int mt_ar[]={1,3,4,3,1};
    int size=sizeof(mt_ar)/sizeof(mt_ar[0]);

    cout<<"Peak value "<<mountArr(mt_ar, size);
}
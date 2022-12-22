#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    cout<<"hello world"<<endl;
    int n,i=10,sum=0,prod=1,temp;
    cin>>n;
    while(n%i!=0)
    {
        sum += n%i;
        prod *= n%i;
        n = n/i;
    }
    cout<<prod - sum<<endl;

    return 0;
}
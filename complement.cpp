#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i=0,c=0,mask=0;
    float ans1 = 0,ans2 = 0;
    cin>>n;
    int temp = n;
    if(n == 0)
    {
        ans2 = 1;
        goto res;
    }
    while(n!=0)
    {
        int bit = n & 1;
        ans1 = (bit * pow(10,i)) + ans1;
        n = n >> 1;
        i++;
    }
    while(i > 0)
    {
        mask = (mask << 1) | 1;
        i--;
    }
    ans2 = ~temp & mask;
    res:
    cout<<"binary "<<ans1<<endl;
    cout<<"1's complement "<<ans2;
    return 0;
}
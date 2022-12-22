#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    char u[100];
    int m,i,j,n,k;

    cout<<"enter string "<<endl;
    cin>>s;
    cout<<"enter factor "<<endl;
    cin>>k;

    n = s.length();
    for (i = 0; i < n/k; i++)               //i=0; i<3; i++                 i=1;                    i=2
    {                                       //m=0;          m=1;    m=2     m=3      m=4    m=5
        m = k*i;                          //j=0;j<3;      j=1;    j=2       j=0      j=1    j=2
        for(j = 0; j < k; j++)              //u.(0)=s.(0);
        {
            u[j] = s.at(m);
            m++;
        }
        for(int p = 0; p < k; p++)
        {
            for(int q = p + 1; q < k; q++)
            {
                if(u[q]==u[p])
                {
                    u[q] = ' ';
                }
            }
        } 
        cout<<u<<endl;
    }
    return 0;
}

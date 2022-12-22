#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    int i = 1,c = 1,j,k,s,t;
    // while(i <= n)
    // {
    //     j = 1;
    //     while(j <= n)
    //     {
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)
    // {
    //     j = 1;
    //     while(j <= i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)        1
    // {                    2 3
    //     int v = i;       3 4 5
    //     j = 1;           4 5 6 7
    //     while(j <= i)
    //     {
    //         cout<<v;
    //         j++;
    //         v++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    
    // while(i <= n)        1
    // {                    2 3
    //     j = 0;           3 4 5
    //     while(j < i)     4 5 6 7
    //     {
    //         cout<<i+j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
   
    // while(i <= n)        1
    // {                    2 1
    //     j = 0;           3 2 1
    //     while(j < i)     4 3 2 1  
    //     {                
    //         cout<<i-j;   can use i-j+1 if j = 1 also j<=i for condition
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
   
    // while(i <= n)
    // {
    //     j = 1;
    //     while(j <= n)
    //     {
    //         cout<<char('A' + i - 1);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)
    // {
    //     j = 1;
    //     while(j <= i)
    //     {
    //         cout<<char('A' + n - i + j - 1);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)                ****
    // {                            ***   
    //     j = 1;                   **
    //     while(j <= n - i + 1)    *
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)             *
    // {                        **
    //     s = 1;              ***
    //                        ****
    //     while(s <= n-i)       can also s = n-1;
    //     {                           while(s > i){ cout; s--;} 
    //         cout<<" ";
    //         s++;
    //     }
    //     j = 1;
    //     while(j <= i)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)           
    // {                       
    //     s = 1;              ****   
    //                          ***                       
    //     while(s <= i-1)       **  
    //     {                      *
    //         cout<<" ";
    //         s++;
    //     }
    //     j = 1;
    //     while(j <= n-i+1)
    //     {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i <= n)              *
    // {                         ***
    //     s = 1;               *****
    //     while(s <= n-i)     *******
    //     {                  
    //         cout<<" ";
    //         s++;
    //     }
    //     j = 1;
    //     while(j <= i)
    //     {
    //         cout<<j;
    //         j++;
    //     }
    //     k = 1;
    //     while(k <= i-1)
    //     {
    //         cout<<i-k;
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    while (i <= n)
    {
        j = 1;
        while(j <= n-i+1)
        {
            cout<<j;
            j++;
        }
        s = 1;
        while(s <= i-1)
        {
            cout<<"*";
            s++;
        }
        t = 1;
        while(t <= i-1)
        {
            cout<<"*";
            t++;
        }
        k = n-i+1;
        while(k)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
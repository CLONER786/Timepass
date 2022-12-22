#include<iostream>
using namespace std;

long long int sqRoot(int n) //binary search
{   
    int ans=-1;
    int s=0;
    int e=n-1;
    long long int m=(s/2)+(e/2); 

    while(s<=e)
    {
        m=(s/2)+(e/2);
        long long int prod=m*m; //to not exceede INT_MAX hence long long
        if(prod==n)
        {
            return m;
        }  
        if(prod>n)
            e=m-1;
        if(prod<n)
        {
            ans=m;
            s=m+1;
        }
    }
    return ans;
}
double morePrecise(double tempSol, int dec,int n)
{
    double factor=1;
    for(int i=1; i<=dec; i++)
    {
        factor=factor/10;
        for(double j=tempSol; j*j<n; j=j+factor)
        {
            tempSol=j;
        }
    }
    return tempSol;
}
int main()
{
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;

    int tempSol=sqRoot(n);
    cout<<"Square root "<<tempSol<<endl;
    cout<<"Upto 3 decimals "<<morePrecise(tempSol, 3, n);
    return 0;
}
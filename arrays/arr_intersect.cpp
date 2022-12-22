#include<iostream>
using namespace std;
void intsec(int a1[],int a2[],int s1,int s2)
{
    cout<<"Intersection ";
    int i=0,j=0;
    while(i<s1 && j<s2)
    {
        if(a1[i]==a2[j]) 
        {
            cout<<a1[i]<<" ";
            i++;
            j++;
        }
        else if(a1[i]<a2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int a1[]={3,4,5};       //code only valid for sorted arrays
    int a2[]={1,2,2,3,4};   //u can manually sort() the arrays before function call

    int s1=sizeof(a1)/sizeof(a1[0]);
    int s2=sizeof(a2)/sizeof(a2[0]);

    intsec(a1, a2, s1, s2); 
    return 0;
}
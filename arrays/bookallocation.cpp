#include<iostream>
using namespace std;

bool isPossible(int books[], int k, int mid, int n) //book allocation problem
{                                                   //popular search space problem
    int studentCount=1;                             // other similar problems include
    int pageSum=0;                                  //aggresive cows, painter board, etc.
    
    for(int i=0; i<n; i++)
    {
        if(pageSum+books[i] <= mid)
        {
            pageSum+=books[i];
        }
        else
        {
            studentCount++;
            if(studentCount>k || books[i] > mid)
            {
                return false;
            }
            pageSum=books[i];
        }
    }
    return true;
}
int findLargestMinDistance(int books[], int k, int n)
{
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum += books[i];
    }
    
    int e=sum;
    int ans=-1;
    
    while(s<=e)
    {
        int mid=(s/2)+(e/2);
        if(isPossible(books,k,mid,n))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
int main()
{
    int books[] = {10,20,30,40};
    int n=4;
    int k=2;

    cout<<findLargestMinDistance(books,k,n);
}
#include<iostream>
using namespace std;
 
 bool range(int lo, int hi, char ch)
{
    return(lo <= ch && ch <= hi);
}

int main()
{
    char ch;
    cin>>ch;

    // if(ch>= 97 && ch<=122)
    // {
    //     cout<<"lowercase";
    // }
    // else if(ch>= 65 && ch<=90)
    // {
    //     cout<<"uppercase";
    // }
    // else if(ch>=48 && ch<=57)
    // {
    //     cout<<"numeric";
    // }

    range(97, 122, ch)? cout<<"lowercase" : 
    range(65, 90, ch)? cout<<"uppercase" : 
    range(48, 57, ch)? cout<<"nummeric" : cout<<"smtn else";                                                                                           
}
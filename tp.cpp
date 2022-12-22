#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if((int)ch>=47 && (int)ch<=58)
        cout<<"digit";
    else
        cout<<"non-digit";

    return 0;
}

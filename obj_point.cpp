#include<iostream>
using namespace std;
class Kirana
{
    int ino;
    float price;
    public:
        void getData(int a, float b)
        {
            ino = a;
            price = b;
        }
        void Display()
        {
            cout<<"the item number is "<<ino<<endl;
            cout<<"the price of the item is "<<price<<endl;
        }
};

int main()
{
    int i,p,size = 3;
    float q;
    Kirana* ptr = new Kirana[size];
    // memory of 3 objects allocated to ptr with ptr poiting to the first object
    Kirana* ptrTemp = ptr; //ptrTemp points to first object of ptr
    for (i = 0; i < size; i++)
    {
        cout<<"enter item number and price"<<endl;
        cin>>p>>q;
        ptr->getData(p,q);
        ptr++;
    }
    
    for (i = 0; i < size; i++)
    {
        ptrTemp->Display();
        ptrTemp++;
    }
    return 0;
}
#include <iostream>
using namespace std;

template <class T>
class vector
{
    int size,i;
    T *arr;

public:
    vector(int a)
    {
        size = a;
        arr = new T[size];
    }
    void get()
    {
        static int n = 1;
        cout << "enter ijk variables for vector "<<n<<endl;
        n++;
        for (i = 0; i < size; i++)
            cin >> arr[i];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (i = 0; i < size; i++)
            d += this->arr[i] * v.arr[i];
        return d;
    }
};
int main()
{
    vector<int>v1(3);
    v1.get();
    vector<int>v2(3);
    v2.get();
    float a = v1.dotProduct(v2);
    cout<<"dot product = "<<a;
    return 0;
}
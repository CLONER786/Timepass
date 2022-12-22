#include<iostream> //code with harry
using namespace std;


 class Complex;

 class Calculator{
    public:
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
 };

 class Complex
{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // Aliter: Declaring the entire calculator class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(2,3);
    c2.setNumber(4,5);

    Calculator x;
    int sum = x.sumRealComplex(c1,c2);
    cout<<"sum of real terms "<<sum;
    return 0;
}
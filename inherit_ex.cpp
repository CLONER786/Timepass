#include<iostream>
#include<math.h>
using namespace std;

class Simp_Calc
{
    protected:
        int n1,n2;
    public:
        void simp_num(int a, int b)
        {
            n1 = a;
            n2 = b;
        }
        int add()
        {
            return(n1+n2);
        }
        int sub()
        {
            return(n1-n2);
        }
        int prod()
        {
            return(n1*n2);
        }
        float div()
        {
            return(n1/n2);
        }
};

class Sci_Calc
{
    protected:
        int n3,n4;
    public:
        void sci_num(int a, int b)
        {
            n3 = a;
            n4 = b;
        }
        double sine()
        {
            return(sin((n3*3.1415)/180) + sin((n4*3.1415)/180));
        }
        double cosine()
        {
            return(cos((n3*3.1415)/180) + cos((n4*3.1415)/180));
        }
        double logarithm()
        {
            return(log(n3 + n4));
        } 
};

class Hybrid_calc : public Simp_Calc, public Sci_Calc
{
    public:
    void show()
    {
        cout<<"the sum is "<<add()<<endl;
        cout<<"the difference is "<<sub()<<endl;
        cout<<"the product is "<<prod()<<endl;
        cout<<"the division is "<<div()<<endl;
        cout<<"the sine is "<<sine()<<endl;
        cout<<"the cosine is "<<cosine()<<endl;
        cout<<"the logarithm is "<<logarithm()<<endl;
    }
};

int main()
{
    Hybrid_calc op;
    op.simp_num(3,4);
    op.sci_num(5,6);
    op.show();
    return 0;
}

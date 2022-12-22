#include<iostream>
#include<math.h>

using namespace std;

class point
{
    int x,y;
    public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend double distance(point, point );    
};

double distance(point p1, point p2)
{
    return sqrt(pow(((p1.x)-(p2.x)),2) + pow(((p1.y)-(p2.y)),2));
}

int main()
{
    point p1(1,0),p2(70,0);
    double dist = distance(p1,p2);
    cout<<dist;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

class point;

float distance(point , point);

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    friend float distance(point, point);
};
// Creat a funtion which takes two point objects and compute the distance between those points

float distance(point p, point q){
    int d = (p.x - q.x)*(p.x - q.x) + (p.y - q.y)*(p.y - q.y);
    float ans = sqrt(float(d));
    return ans;
}

int main()
{
    point p(1, 0);
    p.displayPoint();
    point q(0,1);
    q.displayPoint();

    cout << distance(p, q);

    return 0;
}
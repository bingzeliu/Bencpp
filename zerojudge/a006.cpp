#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d = b * b - (4 * a * c);
    if (d < 0)
    {
        cout << ("No real root");
        return 0;
    }
    int root1 = (-b + sqrt(d)) / (2 * a);
    int root2 = (-b - sqrt(d)) / (2 * a);
    if (d==0)
    {
        cout << "Two same roots x=" << root1 << endl;
    }
    else 
    {
        cout << "Two different roots x1=" << root1 << " , x2=" << root2 << endl;
    }
    
    return 0;
}
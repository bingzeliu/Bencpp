#include <iostream>
#include <cmath>

using namespace std;
int full_squared(int a,int b)
{
    int sum=0;
    int start_num=(int)sqrt(a);
    if (start_num*start_num<a)
    {
        start_num++;
    }
    int stop_num=(int)sqrt(b);
    for(int j=start_num;j<=stop_num;j++)
    {
        sum=j*j+sum;
    }
        return sum;
}
int main()
{   
    int n;
    cin>>n;
    int a,b;
    for(int x=0;x<n;x++)
    {
        cin>>a>>b;
        int R=full_squared(a,b);
        cout<<"Case "<<x+1<<": "<<R<<endl;
    }
    return 0;
}
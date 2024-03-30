#include <iostream>
using namespace std;
int main()
{
    cout<<"Please enter a A.D. year" << endl;
    int year;
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            cout<<"leap year"<<endl;
            else
            cout<<"not leap year"<<endl;
        }
        else
        cout<<"leap year"<<endl;
    }
    else
    cout<<"not leap year"<<endl;

    return 0;
}
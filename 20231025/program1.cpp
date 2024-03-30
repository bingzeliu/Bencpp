#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"How many number you want to enter?";
    cin>>a;
    int c;
    int d=0;
    for(int b=1;b<=a;b++){
        cin>>c;
        if(c>=60)
        {
            d++;
        }
    }
    cout<<"pass student:"<<d<<endl;
    cout<<"fail student:"<<a-d<<endl;
    return 0;
}
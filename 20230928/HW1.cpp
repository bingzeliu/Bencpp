#include <iostream>
using namespace std;
int main()
{
    for(int a=0;a<5;a++)
        {for(int b=0;b<a;b++){
            cout<<" ";
        } 
        for(int c=0;c<5-a;c++){
            cout<<"*";
        }
        cout<<endl;
        }
    return 0;

}

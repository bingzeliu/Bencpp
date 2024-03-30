#include <iostream>
using namespace std;
int main()
{
    for(int a=0;a<3;a++)
        {
            for(int b=0;b<a;b++)
            {
                cout<<" ";
            }
            {
            for(int c=0;c<2-a;c++)
                cout<<"*";
            }
            for(int d=0;d<3-a;d++)
            {
                cout<<"*";
            }

            cout<<endl; 
        }
    return 0;

}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char password[]="123456789";
    char input_number[20];
    cout<<"Enter password:";
    cin>> input_number;
    if(strcmp(input_number,password)==0)
    {
        cout << "PASS" << endl; 
    }
    else
    {
        cout << "FAIL" << endl;
    }
    return 0;
}
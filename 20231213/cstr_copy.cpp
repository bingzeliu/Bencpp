#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char password[20]="123456789";
    char new_password[20];
    char new_password_check[20];

    cout<<"Current password:"<<password<<endl;
    cout<<"Enter new password:";
    cin>> new_password;
    cout<<"Enter new passward(again)";
    cin>> new_password_check;

    if(strcmp(new_password,new_password_check)==0)
    {
        cout<<"Password change."<<endl;
        strcpy(password,new_password);
    }
    else
    {
        cout<<"New password error."<<endl;

    }
    cout<<"Current password :"<<password<<endl;
    return 0;
}
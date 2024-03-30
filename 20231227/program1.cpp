#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ques_str[] = "Name:Eason,Phone:0987654321";
    char *name; // cout << name << endl; -> "Eason"
    char *phonenumber; // cout << phonenumber << endl; -> "0987654321"
    strtok(ques_str,":");
    name = strtok(NULL,",");
    cout << name << endl;
    strtok(NULL,":");
    phonenumber = strtok(NULL," ");
    cout << phonenumber << endl;

    
    
    return 0;
}



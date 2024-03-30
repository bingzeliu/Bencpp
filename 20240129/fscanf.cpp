#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file;
    file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240127\\data\\test.txt", "r");
    char name[16] ;
    char number[16] ;

    fscanf(file,"%s %s",name,number);

    fclose(file);

    cout<<"read from file:"<<endl;
    cout<<"[name]"<<name<<endl;
    cout<<"[number]"<<number<<endl;

    return 0;
}
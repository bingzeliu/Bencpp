#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file;
    file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240127\\data\\test.txt","a");
    fputs("Hi, my name is Benjamin\n",file);
    fputs("I am sixteen years old\n",file);


    fclose(file);
    return 0;

}

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file;
    file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240127\\data\\test.txt","r");
    char buffer[128];
    fgets(buffer,128,file);
    fclose(file);
    cout << buffer;
    return 0;

}

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    FILE *file;
    file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240127\\data\\test.txt", "w");
    char name[] = "Benjamin";
    char number[] = "0912345678";

    fprintf(file,"[%s]%s",name,number);
    fclose(file);
    return 0;
}

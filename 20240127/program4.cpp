#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    FILE *file;
    file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240127\\data\\test.txt", "r");
    char buffer[128];
    int c = 0;
    while (!feof(file))
    {
        fgets(buffer, 16, file);
        cout << c << "->" << buffer;
        c++;
    }
    return 0;
}

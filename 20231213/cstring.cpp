#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[20] = "Hello,";
    char name[9] = "Benjamin";
    strcat(s1, name);
    cout << s1 << endl;

    return 0;
}
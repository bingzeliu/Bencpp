#include <iostream>

using namespace std;

int main()
{
    int *a = (int*)malloc(sizeof(int)*10);
    for(int i = 0;i<10;i++)
    {
        cout << a+i << ":" << *(a+1)<<endl;
    }

    free(a);
    return 0;
}
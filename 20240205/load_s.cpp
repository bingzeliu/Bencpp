#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

struct packet_info
{
    int id;
    char name[16];
    int money;
};

int main()
{
    struct packet_info info[5];
    FILE *file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240205\\data.dt", "rb");

    int data_count ;
    fread(&data_count, 1, sizeof(int), file);
    cout<<"data_count="<<data_count<<endl;
    fread(info, data_count, sizeof(struct packet_info), file);
    fclose(file);
    cout << "File load finished." << endl;
    for (int i = 0; i < data_count; i++)
    {
       printf("[id] %5d",info[i].id);
       printf("[name] %10s",info[i].name);
       printf("[money] %10d\n",info[i].money);
    }
    
    return 0;
}

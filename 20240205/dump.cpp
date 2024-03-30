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

struct packet_info gen_info(int id, const char *name, int money)
{
    struct packet_info g;
    g.id = id;
    strcpy(g.name, name);
    g.money = money;
    return g;
}
int main()
{
    struct packet_info info[5];
    info[0] = gen_info(1, "Father", 1000);
    info[1] = gen_info(2, "Mother", 2000);
    info[2] = gen_info(3, "Grandfather", 3000);
    info[3] = gen_info(4, "Grandmother", 4000);
    info[4] = gen_info(5, "Aunt", 5000);
    FILE *file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240205\\data.dt", "wb");

    int data_count = 3;
    fwrite(&data_count, 1, sizeof(int), file);
    fwrite(info, data_count, sizeof(struct packet_info), file);
    fclose(file);
    cout << "File dump finished." << endl;
    return 0;
}

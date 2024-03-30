#include <iostream>

usig namespace std;

struct order
{
    int order_id;
    int order_code;
    struct order *next;
}

void
print_out(struct order head)
{
    while (1)
    {
        cout << "[ID] " << head.order_id << "[code]" << head.order_code << endl;
        if (head.next == NULL)
        {
            cout << "End of list" << endl;
        }
    }
}
int main()
{
    struct order a;
    struct order b;
    struct order c;

    a.order_id = 1;
    b.order_id = 2;
    c.order_id = 3;

    a.order_code = 1;
    b.order_code = 2;
    c.order_code = NULL;
    print_out(b);
    return 0;
}
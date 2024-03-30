#include <iostream>
using namespace std;
#define MAX_NUM 10000
int prime_storage[MAX_NUM];

int find_prime_at(int n)
{
    prime_storage[0] = 2;
    int storage_size = 1;
    int is_prime;

    for (int to_check = 3; storage_size < n; to_check++)
    {
        is_prime = 1;
        for (int a = 0; a < storage_size; a++)
        {
            if (to_check % prime_storage[a] == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            prime_storage[storage_size++] = to_check;
        }
    }
    return prime_storage[storage_size - 1];
}
int main()
{
    int number = find_prime_at(10000);
    cout << number << endl;

    return 0;
}
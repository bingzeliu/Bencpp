#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = (int *)malloc(sizeof(int) * n);
    if (a == NULL)
    {
        cout << "malloc error" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min_idx;
    int temp;
    for (int i = 0; i < n; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    free(a);
    return 0;
}
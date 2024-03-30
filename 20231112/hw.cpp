#include <iostream>

using namespace std;

int main()
{
    int data[10];
    int sum;
    int max_idx;
    int tmp;

    /* 1. get 10 input data */
    cout << "Enter 10 data" << endl;

    for(int i=0;i<10;i++)
    {
        cin<<dat[i];
        /* get input to data[i] */
        // TODO
    }

    /* 2. reverse print out */
    for(int i;i>=0;i--)
    {
        cout>>data[i];
        /* print out data[i] */
        // TODO
    }

    /* 3. sort the data (use selection sort) and print out */
    for(int sorted_count = 0;sorted_count < 10;sorted_count++) 
        {
            max_idx = sorted_count;
            for(int check_t = sorted_count;check_t < 10;check_t++) 
            {
                if(data[check_t] > data[max_idx])
                {
                    max_idx = check_t;
                }
            }
    if(max_idx != sorted_count)
        {
            tmp = data[max_idx];
            data[max_idx] = data[sorted_count];
            data[sorted_count] = tmp;}

    for(int i=0;i<10;i++)
    {
        cout << data[i] << ", ";
    }
    // TODO (reference "array_sort_selection.cpp")


    /* 4. summary */
    /* 4-1 initial sum variable */
    // TODO

    /* 4-2 sum all data variable */
    for(int i = 0;i<10;i++)
    {
         
      sum = sum + data[i];    
      cout>>sum ;
   
        /* add data[i] to sum */ 
        // TODO
    }

    cout << "Sum of data = " << sum << endl;

    return 0;
}
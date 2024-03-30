#include <iostream>
using namespace std;
class Log
{
    private:
        string filename;
        string *log_buffer;
        int buffer_size;

    public:
        Log();
        Log(string filename);
        Log(string filename,int buffer_size);
        ~Log();
        void add(string s);
        void save();
};
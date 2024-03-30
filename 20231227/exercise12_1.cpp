#include <iostream>

using namespace std;

struct class_info
{
    char leader_name[20]; // 班長的名字
    int student_count;    // 班級人數
    int score[50];        // 個人分數(最多50位)
};

int main()
{
    int sum = 0;
    struct class_info C1;

    // 取得班長名稱
    cout << "Enter leader name of this class:";
    cin >> C1.leader_name;

    // 取得班級人數
    cout << "Enter student counts:";
    cin >> C1.student_count;

    // 取得個人分數
    cout << "Enter score (use \" \" as seperator):";
    for (int i = 0; i < C1.student_count; i++)
    {
        cin >> C1.score[i];
    }

    // 輸出班長名稱
    cout << C1.leader_name << endl;
    // 輸出座號&分數 (偷偷順便加總，算總分)
    for (int i = 0; i < C1.student_count; i++)
    {
        cout << i + 1 << ":" << C1.score[i] << endl;
    }
    for (int i = 0; i < C1.student_count; i++)
    {
        
        sum = sum + C1.score[i];
        /*if (i <= C1.student_count)
        {
            cout << sum <<endl;
        }*/
    }
    // 輸出班平均
    
    cout << "[average]" << (float)sum / (float)C1.student_count << endl;

    return 0;
}
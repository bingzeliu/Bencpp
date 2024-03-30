#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;
float calculate(int a, char b, int c)
{
    float r;
    switch (b)
    {
        case '+':
            r = a + c;
            break;
        case '-':
            r = a - c;
            break;
        case '*':
            r = a * c;
            break;
        case '/':
            r = a / c;
            break;
        case '^':
            r = pow(a,c);
            break;
        default:
            r = 0;
    }
    return r;
}

int main()
{
    FILE *question_file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240129\\test.txt", "r");
    FILE *answer_file = fopen("C:\\Users\\Benjamin0628\\Desktop\\cpp_code\\20240129\\answer.txt", "w");
    int number_A;
    int number_B;
    char symbol;

    float result;

    while (!feof(question_file))
    {
        fscanf(question_file, "%d %c %d\n", &number_A, &symbol, &number_B);
        result = calculate(number_A, symbol, number_B);
        fprintf(answer_file, "%d %c %d=%.2f\n", number_A, symbol, number_B, result);
    }
    fclose(question_file);
    fclose(answer_file);
    cout << "Calculate Done" << endl;

    return 0;
}
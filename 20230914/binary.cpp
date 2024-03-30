#include "stdio.h"
int main()
{
    unsigned char a=0b00001010;
    unsigned char b=0b00000110;
    unsigned char c=a|b;
    printf("%d\n",c);
    
/*
xor(Exclusive-OR)互斥或
口訣:長的一樣是0，長不一樣是1

*/

    a = 0b00001010; // (binary)
    b = 0b00000110; // (binary)
    c = a ^ b; // 0000 1100
    printf("%d\n",c);

    return 0;
}







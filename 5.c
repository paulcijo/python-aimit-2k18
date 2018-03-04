// if condition demo continued in C
#include<stdio.h>
void main() {
    int a = 10, b = 1, c = 3;

    if (a == 7 || (b == 1 && c == 2))
    {
        a = 12;
    }

    // this will happen even if the above if condition is false
    b = 1;
}
#include <stdio.h>
// 1. MAX/MIN 宏

// 自己写：
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

// 观察副作用。

int main()
{
    int x = 5, y = 10;
    printf("MAX: %d\n", MAX(x++, y++)); // 观察 x 和 y 的值
    printf("MIN: %d\n", MIN(x++, y++)); // 观察 x 和 y 的值
    printf("x: %d, y: %d\n", x, y); // 观察 x 和 y 的最终值
    return 0;
}
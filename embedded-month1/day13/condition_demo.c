#include <stdio.h>
// 2. 条件编译 demo
// 例如：
#define DEBUG
 
// 打印调试信息。

int main()
{
    #ifdef DEBUG
    printf("调试信息：程序正在运行...\n");
    #endif
    printf("程序执行完成。\n");
    return 0;
}
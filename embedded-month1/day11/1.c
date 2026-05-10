#include <stdio.h>
// 1. static demo
// 分别测试：
// 1. static 修饰全局变量：作用域仅限当前文件
static int golbal = 10;
// 2. static 修饰函数：作用域仅限当前文件
static void fun(){
    int num = 30;
}
int main()
{
    // 3. static 修饰局部变量：函数结束后值保留
    static int local = 20;
    printf("全局：%d\n",golbal);
    printf("局部：%d\n",local);
    golbal += 15;
    local ++;
    printf("全局：%d\n",golbal);
    printf("局部：%d\n",local);
 fun();// 调用static函数
// printf("num=%d\n",num); // num 是 fun 函数内的局部变量，无法在 main 函数中访问

    return 0;
}
#include <stdio.h>
extern int a; // 声明外部变量
extern int b; // 声明外部变量
extern void fun(); // 声明外部函数
int main()
{
    printf("a=%d\n",a); // 访问外部变量 a
    printf("b=%d\n",b); // 访问外部变量 b
    fun(); // 调用外部函数 fun
    return 0;
}
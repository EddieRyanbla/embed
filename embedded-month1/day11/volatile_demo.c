#include <stdio.h>
// 3. volatile demo（模拟）
// 写一个循环读取变量的 demo，理解为什么优化会出问题。

volatile int key_pressed=0;
void fun(){
    key_pressed = 1; // 修改变量 key_pressed 的值
}
int main()
{
    while (key_pressed == 0)
    {
        printf("key_pressed=%d\n",key_pressed);
    }
    printf("程序结束\n");
    
    return 0;
}
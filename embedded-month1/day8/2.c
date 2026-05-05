#include <stdio.h>
// 2. 用函数交换两个数
// 要求：
// - 普通写法
// - 指针写法（交换成功）
void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swap_ptr(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=10,y=20;
    printf("交换前：x=%d, y=%d\n", x, y);
    swap(x,y);
    printf("普通交换后：x=%d, y=%d\n", x, y);
    swap_ptr(&x,&y);
    printf("指针交换后：x=%d, y=%d\n", x, y);

    return 0;
}
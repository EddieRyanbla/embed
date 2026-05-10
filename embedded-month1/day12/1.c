#include <stdio.h>
// 1. 计算器菜单
// 功能：
// - 加减乘除
// 通过函数指针调用不同函数。
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int (*calc[])(int , int)={add,sub,mul,div};
int main()
{
    int op=1;
    int a=2,b=3;
    int result = calc[op](a,b);
    printf("%d\n",result);
    return 0;
}
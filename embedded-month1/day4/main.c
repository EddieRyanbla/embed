#include <stdio.h>

// 1. static 修饰局部变量
// void  fun1(){
//     static int count=0;
//     count++;
//     printf("fun1 count: %d\n", count);
// }
// // 2. static 修饰全局变量
// static int global_count = 0;
// 3. extern 跨文件访问变量
// extern int count;
// extern int global_count;
// extern void fun1();
// extern void fun0();
// 4. 用宏写一个 MAX(a,b)，然后观察副作用
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main()
{
    // fun1(); // 输出: fun1 count: 1
    // fun1(); // 输出: fun1 count: 2
    // global_count++;
    // printf("global_count: %d\n", global_count); // 输出: global_count: 1
    // global_count++;
    // printf("global_count: %d\n", global_count); // 输出: global_count: 2
    // printf("count: %d\n", count); // 输出: count: 0
    // printf("global_count: %d\n", global_count); // 输出: global_count: 0
    // fun0(); // 输出: fun0 count: 1
    // fun1(); // 输出: fun1 count: 2
    // printf("num: %d\n", num); // 输出: num: 2
    printf("MAX(3, 5): %d\n", MAX(3, 5)); // 输出: MAX(3, 5): 5
    int x = 3;
    int y = 5;
    int result = MAX(x++, y++); // 这里会有副作用，x 和 y 都会被自增
    printf("result: %d\n", result); 
    printf("x: %d, y: %d\n", x, y); 

    return 0;
}
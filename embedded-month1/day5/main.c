#include <stdio.h>
#include <stdlib.h>

// 2. 写一个菜单程序，用函数指针调用不同功能
// void menu1() {
//     printf("Menu 1 selected\n");
// }
// void menu2() {
//     printf("Menu 2 selected\n");
// }
// void menu3() {
//     printf("Menu 3 selected\n");
// }
// 3. 写一个“排序接口”，通过回调决定升序或降序

int main()
{
    // 1. 动态申请整型数组并求和
    // int n;
    // int *arr;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    // arr=(int *)malloc(n*sizeof(int));
    // if (arr == NULL) {
    //     printf("Memory allocation failed\n");
    //     return 1;
    // }
    // printf("Enter %d integers:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += arr[i];
    // }
    // printf("Sum: %d\n", sum);
    // free(arr); // 释放动态申请的内存

    // void (*menu_num[3])() = {menu1, menu2, menu3};
    // int choice;
    // printf("Enter menu choice (1-3): ");
    // scanf("%d", &choice);
    // if (choice >= 1 && choice <= 3) {
    //     menu_num[choice - 1](); // 调用对应的菜单函数
    // } else {
    //     printf("Invalid choice\n");
    // }
    return 0;
}
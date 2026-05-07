#include <stdio.h>
#include <stdlib.h> 
// 1. 动态数组
// 功能：
// - 输入 n
// - 动态申请 n 个整数
// - 求和、平均值

// int **arr要改的数组, int *size当前内存里存的大小, int *n数组里总共申请n个整数
void dynamic_Array(int **arr, int *n) {
    printf("输入n个整数：\n");
    scanf("%d", n);

    *arr = (int*)malloc(*n * sizeof(int));
    if (*arr == NULL)
    {
        printf("内存分配失败\n");
        exit(1);
    }
}
int main()
{
    int *arr = NULL;
    int n = 0;
    dynamic_Array(&arr, &n);
    printf("输入的整数为：\n");
    for (int i = 0; i < n; i++)    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)    {
        sum += arr[i];
    }
    double average = (double)sum / n;
    printf("整数的和为：%d\n", sum);
    printf("整数的平均值为：%.2f\n", average);
    free(arr);
    arr = NULL;
    return 0;
}
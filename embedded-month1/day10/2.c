#include <stdio.h>
#include <stdlib.h>
// 2. 动态扩容
// 用 realloc
// 例如：
// - 先申请 5 个
// - 后扩到 10 个


int main()
{
    int *arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("内存分配失败\n");
        exit(1);
    }
    printf("输入5个整数：\n");
    for (int i = 0; i < 5; i++)    {
        scanf("%d", &arr[i]);
    }
    printf("输入的整数为：\n");
    for (int i = 0; i < 5; i++)    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // 扩容到10个
    int *temp = (int*)realloc(arr, 10 * sizeof(int));
    if (temp == NULL)
    {
        printf("内存扩容失败\n");
        free(arr);
        exit(1);
    }
    arr = temp;
    printf("输入5个新的整数：\n");
    for (int i = 5; i < 10; i++)    {
        scanf("%d", &arr[i]);
    }
    printf("输入的整数为：\n");
    for (int i = 0; i < 10; i++)    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    arr = NULL;
    return 0;
}
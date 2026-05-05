#include <stdio.h>
// 3. 二维数组打印
// 要求：
// - 普通索引方式
// - 指针方式访问

int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("普通索引方式打印二维数组：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("指针方式访问二维数组：\n");
    int *p = arr[0];
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}
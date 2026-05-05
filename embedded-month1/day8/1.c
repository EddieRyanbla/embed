#include <stdio.h>
// 1.用指针遍历数组
// 功能：
// - 输入 10 个数
// - 用指针求和、求平均值

int main()
{
    int arr[10];
    int *p=arr;
    int sum=0;
    float avg;
    
    printf("请输入10个数字:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&p[i]);
        sum += p[i]; 
    }
    avg=(float)sum/10.0;
    printf("和为：%d,平均值为：%.2f",sum,avg);
    
    return 0;
}
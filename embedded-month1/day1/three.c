#include <stdio.h>

int main()
{
    // 用指针遍历数组并输出
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    for (int i = 0; i < 5; i++)
    {
        printf("第%d个元素:%d\n",i+1,*(p+i));
    }
    
    return 0;
}
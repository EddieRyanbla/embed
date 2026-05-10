#include <stdio.h>
// 2. 排序回调
// 功能：
// - 升序
// - 降序
// 通过不同比较函数控制排序规则。
int compare_asc(int a,int b){
    return a-b;
}
int compare_desc(int a,int b){
    return b-a;
}
void bubble_sort(int *arr,int len,int (*cmp)(int,int)){
    for (int i = 0; i < len-1; i++)
    {
        for (int  j = 0; i < len-1-i; j++)
        {
            if (cmp(arr[j],arr[j+1])>0)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {3,1,4,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,len,compare_asc);
    bubble_sort(arr,len,compare_desc);
    return 0;
}
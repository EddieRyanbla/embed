#include <stdio.h>
#include <string.h>
// 2. 字符串数组排序
// 例如：
// - apple
// - banana
// - cat
// 按字典序排序。

int main()
{
    char *arr[]={"apple","bannan","cat"};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for (int j = 0; j < n-1-i; j++)
        {
            if (strcmp(arr[j],arr[j+1])>0)
            {
                char *temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("排序后的字符串数组：\n");
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}
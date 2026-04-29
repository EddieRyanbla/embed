#include <stdio.h>
// 自己实现 my_strlen（计算字符串长度）
    int my_strlen(const char *str){
        int len=0;
        while (*str != '\0')
        {
            len++;
            str++;
        }
        return len;
    }
int main()
{
    char arr[]="HELLO WORLD";
    int len=my_strlen(arr);
    printf("字符串长度:%d\n",len);

    return 0;
}
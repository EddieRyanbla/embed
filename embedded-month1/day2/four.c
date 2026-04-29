#include <stdio.h>
// 输入一行字符串，统计字母、数字、空格数量
int main()
{
    char arr[30];
    // printf("请输入字符串：%s",arr);
    // scanf("%s",arr);
    printf("请输入字符串：");
    // 用fgets读取带空格的整行输入
    fgets(arr, sizeof(arr), stdin);
    int zimu = 0;   // 字母数量
    int shuzi = 0;  // 数字数量
    int kongge = 0; // 空格数量
    int i = 0;
     printf("其中的字母为：");
   
    // 定义指针，指向字符串的开头
    char *p = arr;

    // 用指针遍历字符串，直到遇到 '\0'
    while (*p != '\0')
    {
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            printf("%c", *p);  // 输出当前字母
        }
        else if (*p >= '0' && *p <= '9')
        {
            shuzi++;
        }
        else if (*p == ' ')
        {
            kongge++;
        }
        // 指针向后移动，指向下一个字符
        p++;
    }

    printf("其中的数字为：%d\n", shuzi);
    printf("其中的空格数量为：%d\n", kongge);

    return 0;
}
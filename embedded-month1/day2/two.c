#include <stdio.h>
// 自己实现 my_strcpy,第二个字符串复制给第一个
void my_strcpy(char *one,char *two){
    // // 第二个位置的指针赋值给第一个
    // *one = *two;
    
    // 依次复制two里的每一个值知道遇到‘\0’（包括‘\0’）
    while (*two != '\0')
    {
        *one = *two;
        one++;
        two++;
        
    }
    *one = '\0';
    
}

int main()
{
    char three[]="123";
    char four[]="456";
    my_strcpy(three,four);
    printf("第一个字符串为：%s",three);
    return 0;
}
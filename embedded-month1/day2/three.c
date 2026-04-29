#include <stdio.h>
// 自己实现 my_strcmp
int my_strcmp(const char *str1, const char *str2){
    while (*str1 !='\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1-*str2;
        }
        str1++;
        str2++;
    }
    return *str1-*str2;
}
int main()
{
     char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";

    printf("str1 vs str2: %d\n", my_strcmp(str1, str2));
    printf("str1 vs str3: %d\n", my_strcmp(str1, str3));
    return 0;
}
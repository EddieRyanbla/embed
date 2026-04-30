#include <stdio.h>
#include "student.h"
// 最多存100个学生
#define MAX_STUDENTS 100
int main()
{
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;
    while (1)
    {
        printf("请选择操作：1.添加学生 2.打印学生信息 3.查找最高分 0.退出\n");
        scanf("%d", &choice);
        switch (choice)
        {        case 1:
            add_student(students, &count);
            break;
        case 2:
            print_students(students, count);
            break;
        case 3:
            find_highest_score(students, count);
            break;
        case 0:
            printf("退出程序。\n");
            break;
        default:
            printf("无效选择，请重新输入。\n");
        }
    }

    return 0;
}
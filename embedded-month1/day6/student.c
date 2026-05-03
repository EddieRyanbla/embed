#include <stdio.h>
#include "student.h"

void add_student(Student student[], int *count)
{
    printf("请输入学生姓名、学号和成绩：");
    scanf("%s %d %f", student[*count].name, &student[*count].id, &student[*count].score);
    (*count)++;
}

void print_students(Student student[], int count)
{
    printf("学生信息：\n");
    for (int i = 0; i < count; i++)
    {
        printf("姓名：%s，学号：%d，成绩：%.2f\n", student[i].name, student[i].id, student[i].score);
    }
}

void find_highest_score(Student student[], int count)
{
    if (count == 0)
    {
        printf("没有学生信息。\n");
        return;
    }
    Student *highest = &student[0];
    for (int i = 1; i < count; i++)
    {
        if (student[i].score > highest->score)
        {
            highest = &student[i];
        }
    }
    printf("最高分学生：姓名：%s，学号：%d，成绩：%.2f\n", highest->name, highest->id, highest->score);
}

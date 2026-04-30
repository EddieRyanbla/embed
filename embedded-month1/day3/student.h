#ifndef STUDENT_H
#define STUDENT_H

// 功能：添加、打印、查找最高分
typedef struct student
{
    char name[20];
    int id;
    float score;
} Student;

void add_student(Student student[],int *count);
void print_students(Student student[],int count);
void find_highest_score(Student student[],int count);
#endif // STUDENT_H
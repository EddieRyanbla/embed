#include "system.h"
#include <stdio.h>
#include <stdlib.h>
void init_list(DeviceList *list, int cap) {
    list->data = (info*)malloc(cap * sizeof(info));
    list->count = 0;
    list->capacity = cap;
}
void add_info(DeviceList *list)
{
    // 1. 判断是否满了，满了就扩容 2 倍
    if (list->count >= list->capacity)
    {
        // 容量 ×2
        list->capacity *= 2;

        // 真正扩容内存
        list->data = (info *)realloc(list->data, list->capacity * sizeof(info));
    }

    // 2. 定义一个指针指向“即将要添加的位置”
    info *p = &list->data[list->count];

    // 3. 输入信息
    printf("请输入设备编号：");
    scanf("%d", &p->id);

    printf("请输入设备名称：");
    scanf("%s", p->name);  // 名字没有空格，直接用 %s

    // 重点！%c 前面加空格，吃掉换行符
    printf("请输入设备状态：");
    scanf(" %c", &p->status);

    printf("请输入采样值：");
    scanf("%f", &p->num);

    // 4. 添加成功，数量 +1
    list->count++;

    printf("添加成功！\n");
}


void print_info(DeviceList *list)
{
    for (int i = 0; i < list->count; i++)
    {
        printf("ID:%d,姓名：%s,状态：%c,采样值：%.2f\n",list->data[i].id,list->data[i].name,list->data[i].status,list->data[i].num);
    }
    printf("打印完成！\n");
}

void find_info(DeviceList *list)
{
    int need_id;
    printf("请输入要查找的设备ID:");
    scanf("%d",&need_id);
    for (int i = 0; i < list->count; i++)
    {
        if(list->data[i].id == need_id){
            printf("ID:%d,姓名：%s,状态：%c,采样值：%.2f\n",list->data[i].id,list->data[i].name,list->data[i].status,list->data[i].num);
            return;
        }
    }
    printf("未找到该设备！\n");
}

void find_num_m(DeviceList *list)
{
    float max_num=list->data[0].num;
    float min_num=list->data[0].num;
    for (int i = 0; i < list->count; i++)
    {
        if (list->data[i].num > max_num)
        {
            max_num = list->data[i].num;
        }
        if (list->data[i].num < min_num)
        {
            min_num = list->data[i].num;
        }
    }
    printf("最大采样值：%.2f\n", max_num);
    printf("最小采样值：%.2f\n", min_num);
    
}

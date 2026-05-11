#include "device.h"

// DeviceList *list要初始化的列表地址, int cap初始化的列表容量
void init_device_list(DeviceList *list, int cap){
    list->data = (Device *)malloc(cap * sizeof(Device));
    list->count = 0;
    list->capacity = cap;
}

void add_device(DeviceList *list){
    if(list->count >= list->capacity){
        list->capacity *= 2;
        list->data = (Device *)realloc(list->data, list->capacity * sizeof(Device));
        if(!list->data){
            printf("内存分配失败！\n");
            exit(1);
        }
    }
    Device new_device;
    printf("请输入设备ID: ");
    scanf("%d", &new_device.id);
    printf("请输入设备名称: ");
    scanf("%s", new_device.name);
    printf("请输入设备状态: ");
    scanf("%s", new_device.status);
    printf("请输入设备数值: ");
    scanf("%f", &new_device.num);
    list->data[list->count] = new_device;
    list->count++;
    printf("设备添加成功！\n");
}

void delete_device(DeviceList *list, int id){
    if (list->count == 0)
    {
        printf("设备列表为空！\n");
        return;
    }
    for (int  i = 0; i < list->count; i++)
    {
        if (list ->data[i].id == id)
        {
            // 找到要删除的设备
            for (int j = i; j < list->count-1; j++)
            {
                list->data[j] = list->data[j+1];
            }
            list->count--;
            printf("设备删除成功！\n");
            return;
        }else{
            printf("未找到设备ID为%d的设备！\n", id);
        }
    }
}

void find_device(DeviceList *list){
    if(list -> count ==0){
        printf("设备列表为空！\n");
        return;
    }
    int id;
    printf("请输入要查找的设备ID: ");
    scanf("%d", &id);
    for (int i = 0; i < list->count; i++)
    {
        if(list->data[i].id == id){
            printf("设备信息:\n");
            printf("ID:%d,Name:%s,Status:%s,Num:%.2f\n",list->data[i].id, list->data[i].name, list->data[i].status, list->data[i].num);
            return;
        }
    }
    printf("未找到设备ID为%d的设备！\n", id);
}
void reset_status(DeviceList *list, int id, const char *new_status){
    if (list->count ==0)
    {
        printf("设备列表为空！\n");
        return;
    }
    for (int i = 0; i < list->count; i++)
    {
        if (list->data[i].id == id)
        {
            strcpy(list->data[i].status, new_status);
            printf("设备状态重置成功！\n");
            return;
        }
    }
    printf("未找到设备ID为%d的设备！\n", id);
}
    
void sort_devices(DeviceList *list){
    if (list->count == 0)
    {
        printf("设备列表为空！\n");
        return;
    }
    for (int i = 0; i < list->count; i++)
    {
        for (int j = 0; j < list->count-1-i; j++)
        {
            if (list ->data[j].id > list->data[j+1].id)
            {
                Device temp = list->data[j];
                list->data[j] = list->data[j+1];
                list->data[j+1] = temp;
            }   
        }
    }
    printf("设备排序成功！\n");
}
void save_log(DeviceList *list, const char *filename){
    // 保存日志
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("无法打开文件！\n");
        return;
    }
    for (int i = 0; i < list->count; i++) {
        fprintf(file, "ID:%d,Name:%s,Status:%s,Num:%.2f\n", list->data[i].id, list->data[i].name, list->data[i].status, list->data[i].num);
    }
    fclose(file);
    printf("日志保存成功！\n");
}


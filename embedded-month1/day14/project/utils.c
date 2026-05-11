#include "utils.h"

void print_menu(){
    printf("设备管理系统 v2\n");
    printf("1. 添加设备\n");
    printf("2. 删除设备\n");
    printf("3. 查找设备\n");
    printf("4. 重置设备状态\n");
    printf("5. 设备排序\n");
    printf("6. 保存日志\n");
    printf("0. 退出系统\n");
}
int get_choice(){
    int choice;
    printf("请输入您的选择: ");
    scanf("%d", &choice);
    return choice;
}
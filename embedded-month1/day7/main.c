#include <stdio.h>
#include "system.h"

typedef void (*Func)(DeviceList*);
int main()
{
    // 1. 替换固定数组为动态列表
    DeviceList list;
    init_list(&list, 5); // 初始容量设为5，不够会自动扩容
    int choice;
    Func funcs[] = {NULL,add_info,print_info,find_info,find_num_m};
    while (1){
        printf("请选择操作：1.添加信息 2.打印信息 3.查找设备 4.查找最大最小采样值 0.退出\n");
        scanf("%d",&choice);
        if (choice == 0)
        {
            printf("退出程序。\n");
            break;
        }else if(choice >=1 && choice<= 4){
            funcs[choice](&list);
        }else{
            printf("无效选择，重新输入。\n");
        }
}
    return 0;
}
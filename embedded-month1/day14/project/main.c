#include "utils.h"
// 设备管理系统 v2
typedef void (*MenuFunc)(DeviceList*);
void menu_add_device(DeviceList *list){
    add_device(list);
}
void menu_delete_device(DeviceList *list){
    int id;
    printf("请输入要删除的设备ID: ");
    scanf("%d", &id);
    delete_device(list, id);
}
void menu_find_device(DeviceList *list){
    find_device(list);
}
void menu_reset_status(DeviceList *list){
    int id;
    char new_status[10];
    printf("请输入要重置状态的设备ID: ");
    scanf("%d", &id);
    printf("请输入新的状态: ");
    scanf("%s", new_status);
    reset_status(list, id, new_status);
}
void menu_sort_devices(DeviceList *list){
    sort_devices(list);
}
void menu_save_log(DeviceList *list){
    char filename[20];
    printf("请输入日志文件名: ");
    scanf("%s", filename);
    save_log(list, filename);
}

int main()
{
    print_menu();
    DeviceList list;
    init_device_list(&list, 10);
    MenuFunc funcs[] = { NULL,                // 0：退出
    menu_add_device,     // 1：添加设备
    menu_delete_device,  // 2：删除设备
    menu_find_device,    // 3：查找设备
    menu_reset_status,   // 4：修改状态
    menu_sort_devices,   // 5：排序设备 ← 必须是这个！
    menu_save_log        // 6：保存日志
    };
    int choice;
    while (1)
    {
        choice = get_choice();
        if (choice == 0)
        {
            printf("退出系统。\n");
            break;
        }else if(choice >=1 && choice <=6){
            funcs[choice](&list);
        }else{
            printf("无效选择，请重新输入。\n");
        }
    }
    free(list.data);
    list.data = NULL;
    return 0;
}   
        
    